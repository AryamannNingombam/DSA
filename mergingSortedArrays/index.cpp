#include <iostream>
#include <cmath>
using namespace std;

void display(int arr[],int size){
for (int i{};i<size;i++){
	cout << arr[i] << ' ';
};
cout << endl;
return;


};

void swap(int &first,int &second){
    int temp = first;
    first = second;
    second = temp;
    return;
};



//User function template for C++
class Solution
{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    //GAP METHOD 
	    float GAP = ceil((n+m)/2);
	    int firstPointer{};
	    int secondPointer{};
	    while (1){

	        // secondPointer = GAP;
	       firstPointer = 0;
	          for (secondPointer = GAP;secondPointer < n+m;secondPointer++){
	              //If secondPointer is exceeding the first array's limit;
	              if (secondPointer  < n){
	                  if (arr1[secondPointer] < arr1[firstPointer]){
	                      swap(arr1[secondPointer],arr1[firstPointer]);
						  
	                  }
	                  
	                  
	              }
	              
	              else{
	                  //Start from the second array;
	                  int tempSecond = secondPointer- n;
	                  if (firstPointer < n){
	                    if (arr2[tempSecond] < arr1[firstPointer]){
	                        swap(arr2[tempSecond],arr1[firstPointer]);
							
	                    };
	                  
	                      
	                      
	                      
	                  }
	                  else{
	                      int tempFirst = firstPointer- n;
	                      if (arr2[tempSecond] < arr2[tempFirst]){
	                          swap(arr2[tempSecond],arr2[tempFirst]);
							
	                      };
	                      
	                  };
	              };
				


				  


				  firstPointer++;
	              
	          };
	          
	       if (GAP == 1){

	           return;
	       
		   };
	       
	        GAP = ceil(GAP/2);
	      
	    };
	  
	    
	    
	    
	    
	};
};


int main()
{
	#ifndef OUTPUT_INPUT
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int size1{};
	int size2{};
	cin >> size1 >> size2;
	int arr1[size1];
	int arr2[size2];

	for (int i{};i<size1;i++){
		cin >> arr1[i];
	};


	for (int i{};i<size2;i++){
		cin >> arr2[i];
	};
	Solution finalAnswer;


	finalAnswer.merge(arr1,arr2,size1,size2);

	display(arr1,size1);
	display(arr2,size2);

	return 0;
}