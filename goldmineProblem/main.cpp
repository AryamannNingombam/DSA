#include <iostream>
#include <vector>
#include <climits>

//Greedy approach?;
/*
Eg.
{{10, 33, 13, 15},
{22, 21, 04, 1},
{5, 0, 2, 3},
{0, 6, 14, 2}};

22->33->13->15
answer = 83

*/

//Objective : Given a two dimentional array
// with amount of gold available at each index,
//Find the maximum amount of gold he can 
//extract out if he can only choose these three 
//paths : 
// right
//Diagonal upward left;
//Diagonal downwars right;
//Print out the maximum amount of gold that he can extract;


using namespace std;
using vec = vector<vector<int>>;

int findMaxGoldMine(vec arr,int rows,int columns);

int main(){
    #ifndef OUTPUT_INPUT
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int rows{},columns{};

    cin >> rows >> columns;
    vec arr(rows,vector<int>(columns));
    for (int i{};i<rows;i++){
        for (int j{};j<columns;j++){
            cin >> arr[i][j];
        };
    };

    for (int i{};i<rows;i++){
        for (int j{};j<columns;j++){
            cout << arr[i][j] << ' ';
        };
        cout << endl;
    };
    
    cout << "Max Gold Possible : " << findMaxGoldMine(arr,rows,columns) <<endl;


    return 0;
}
int findMaxGoldMine(vec arr,int rows,int columns){
    int counter = 0;
    //Finding the highest number in the first indexes;
    int highestIndex{};
    int highest = INT_MIN;
    for ( int i{};i<rows;i++){
        highest = max(highest,arr[i][0]);
        if (highest == arr[i][0])highestIndex = i;
    };
    int rowPointer = highestIndex;
    int colPointer = 0;
    while (true){
       
         counter += arr[rowPointer][colPointer];



        if (colPointer == columns-1){

            break;
        };
        //Diagonal upward would not be an option;
        if (rowPointer == 0){
            //If the right value is greater than the diagonal right bottom;
            if (
            arr[rowPointer][colPointer+1]<
            arr[rowPointer+1][colPointer+1]
            )
            {rowPointer++;};
        }
        //Diagonal downward would not be an option;
        else if (rowPointer == rows-1){
            //If the right value is greater than the diagonal right upper;
            if (arr[rowPointer-1][colPointer+1]> arr[rowPointer][colPointer+1])rowPointer--;

        }
            else{
                //If somewhere in the middle;
                if (arr[rowPointer][colPointer+1] > arr[rowPointer+1][colPointer+1]){
                    if (arr[rowPointer][colPointer+1] < arr[rowPointer-1][colPointer+1]){
                        rowPointer--;
                    }
                }else{
                    if (arr[rowPointer+1][colPointer+1] > arr[rowPointer-1][colPointer+1]){
                        rowPointer++;
                    }else{
                        rowPointer--;
                    }
                }
            }

    //Always increment the colPointer as we 
    //always have to move forward
    //irrespective of the change in the row;
    colPointer++;
       

    }
    
    


    return counter;
}