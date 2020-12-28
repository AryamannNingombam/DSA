#include <iostream>
#include <vector>

using namespace std;
using intVector = vector<int>;
using checkboard = vector<intVector>;

bool check(int x,int y,int N,const checkboard &sol){
    return (x >= 0 && x < N && y >= 0 && y < N
            && sol[x][y] == -1);
}



int printResult(int row,int col,checkboard &matrix,const int dimensions,int counter){
    int tempRow,tempCol;
    if (counter == (dimensions*dimensions))return 1;
  int rows[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int cols[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
    for (int i{};i<8;i++){
        tempRow = row + rows[i];
        tempCol = col + cols[i];
        if (check(tempRow,tempCol,dimensions,matrix)){
            matrix[tempRow][tempCol] = counter;
            if (printResult(tempRow,tempCol
            ,matrix,dimensions,counter+1)==1)
            return 1;
            else matrix[tempRow][tempCol] = -1;
        }
    };

    return 0;
   
    
    
}


int main(){
    int dimensions;
    cout << "Enter the dimensions of the board : ";
    cin >> dimensions;
    checkboard matrix(dimensions,intVector(dimensions,-1));
    matrix[0][0] = 0;
    if (printResult(0,0,matrix,dimensions,1)==1){

    for (auto &i : matrix){
        for (auto j : i){
            cout << j << ' ';
        };
        cout << '\n';
    }

    }
    ;


    return 0;
}