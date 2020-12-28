
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

using intVector = vector<int>;
using matrixVector = vector<intVector>;
using boolVector = vector<bool>;
using boolMatrix = vector<boolVector>;
 int allRows[] = {1,0,-1,0};
 int allCols[] = {0,-1,0,1};

bool check(int row,int col,matrixVector &v,boolMatrix &visited,int rows,int cols){
	if (row<0 || col < 0 || row>=rows||col>=cols || v[row][col]==0||visited[row][col]){
		return false;
	}

	
	return true;
}


int dfs(int row,int col,matrixVector &v,boolMatrix &visited,int rows,int cols){
	stack<pair<int,int>> s;
	s.push({row,col});
	pair<int,int> temp;
	
	int counter = 0,tempRow,tempCol;
	while (!s.empty()){
		temp = s.top();s.pop();

		
		for (int i=0;i<4;i++){
			tempRow = temp.first + allRows[i];
			tempCol = temp.second + allCols[i];

			if (check(tempRow,tempCol,v,visited,rows,cols)){
				
				visited[tempRow][tempCol] = 1;
				s.push({tempRow,tempCol});

			}
		};
		
		++counter;
	};
	
	return counter;
	
}


vector<int> riverSizes(vector<vector<int>> matrix) {
  // Write your code here.
	pair<int,int> dims = {matrix.size(),matrix[0].size()};

	intVector result;
	cout << dims.first << ' ' << dims.second << '\n';
	boolMatrix visited(dims.first,boolVector(dims.second,0));
	for (int i=0;i<dims.first;i++){
	for (int j=0;j<dims.second;j++){
	if (check(i,j,matrix,visited,dims.first,dims.second)){
		visited[i][j] = 1;

		result.push_back(dfs(i,j,matrix,visited,dims.first,dims.second));
	};
	};
	};
	
  return result;
}

int main(){


	matrixVector m = {
  {1, 0, 0, 1, 0},
  {1, 0, 1, 0, 0},
  {0, 0, 1, 0, 1},
  {1, 0, 1, 0, 1},
  {1, 0, 1, 1, 0}
	};
	auto result = riverSizes(m);
	for (auto &i : result){
		cout << i << ' ';
	}
cout << '\n';

	return 0;
}