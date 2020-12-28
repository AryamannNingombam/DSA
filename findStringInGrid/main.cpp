#include<iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;
using pairVector = vector<pair<int,int>>;
const int rowOptions[] = {0,1,1,1,0,-1,-1,-1};
const int colOptions[] = {1,1,0,-1,-1,-1,0,1};



bool check(int row,int col,char target,vector<vector<char>> &crossword,int rows,int cols){
    if (row <0 || col<0|| row>=rows||col>=cols || crossword[row][col] != target )    
    return false;
    return true;
}
bool continueSearch(int row,int col,vector<vector<char>> &crossword,
string &wordToFind,int rows,int cols,string currentWord,
int nextRow,int nextCol,int target){
    
    currentWord.push_back(crossword[row][col]);
    if (currentWord == wordToFind){
        return true;
    };
    if (check(row + nextRow,col + nextCol,wordToFind[target + 1],crossword,rows,cols))
    return continueSearch(row+nextRow,col+nextCol,crossword,wordToFind,rows,cols,currentWord,nextRow,nextCol,target);


    return false;
}




set<pair<int,int>> beginSearch(vector<vector<char>> &crossword,pairVector &pointsToStartFrom,string &wordToFind,int rows,int cols){
    char target = 1;
    string sub = wordToFind.substr(0,1);
    set<pair<int,int>> result;
    int tempRow,tempCol;
    
    for (const auto &i : pointsToStartFrom){
        
        for (int pointer = 0;pointer<8;pointer++){
        tempRow = i.first + rowOptions[pointer];
        tempCol = i.second + colOptions[pointer];
        if (check(tempRow,tempCol,wordToFind[target],crossword,rows,cols)
        && continueSearch(tempRow,tempCol,crossword,
        wordToFind,rows,cols,sub,rowOptions[pointer]
        ,colOptions[pointer],target)){
            
            result.insert({i.first,i.second});
        }
        }
    }
    return result;
}



int main()
 {
    
	int testCases,rows,cols;
	string wordToFind;
	cin >> testCases;
	for (int _ = 0;_<testCases;_++){
	    cin >> rows >> cols;
	    vector<vector<char>> crossword(rows,vector<char>(cols));
	    for (int i=0;i<rows;i++){
	        for (int j = 0;j<cols;j++){
	            cin >> crossword[i][j];
	        }
	    };
	    cin >> wordToFind;
	    pairVector pointsToStartFrom;
	    for (int i=0;i<rows;i++){
	        for (int j = 0;j<cols;j++){
	            if (crossword[i][j] == wordToFind[0])pointsToStartFrom.push_back({i,j});
	        };
	    };
	    
	    if (wordToFind.size()==1){
	        if (pointsToStartFrom.size()==0){
	            cout << -1;
	        }else{
	            for (auto &i : pointsToStartFrom){
	                cout<< i.first << ' ' << i.second << ", ";
	            }
	        };
	        cout << '\n';
	        continue;
	    }
	    
	    
	    
	    
	    
	    if (pointsToStartFrom.size()==0){
	        cout << -1;
	        
	    }else{
	        auto result = beginSearch(crossword,pointsToStartFrom,wordToFind, rows, cols);
	        if (result.size()==0){
	            cout << -1;
	        }else{
	            for (auto &i :result){
	                cout << i.first << ' ' << i.second << ", ";
	            };
	            
	        }
	    }
	    cout << '\n';
	}
    
    
	return 0;
}