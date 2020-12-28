
#include <iostream>
#include <string>

using namespace std;



string returnMaxPalindrome(const string &s){
    
    int maxLength{1};
    int firstPointer{},secondPointer{},index{};
    
    //Even check
    for (int i{1};i<s.size() ;i++){
        firstPointer = i-1;
        secondPointer = i;
        while (firstPointer >=0 && secondPointer < s.size() && s[firstPointer ] == s[secondPointer]){
            if (secondPointer -firstPointer +1 > maxLength){
                
                index= firstPointer;
                maxLength = secondPointer - firstPointer  + 1;
            };
            
          
            firstPointer--;
            secondPointer++;
            
        }
        
        
        
    
        firstPointer = i-1;
        secondPointer = i+1;
        
        while (firstPointer >=0 && secondPointer < s.size() && s[firstPointer] == s[secondPointer]){
                
                if (secondPointer - firstPointer + 1 > maxLength){
              
                    
                    index = firstPointer;
                    maxLength = secondPointer -firstPointer +1;
                }
                
            
                
            
            firstPointer--;
            secondPointer++;
        }
        
        
        
        
    };
    
    
    
    
       
    return s.substr(index,maxLength);
    
    
    

    
}



int main() {
	//code
	int testCases{};
	cin >> testCases;
	string s;
	for (int _{};_<testCases;_++){
	    cin >> s;
	    cout << returnMaxPalindrome(s) << '\n';
	}
	
	return 0;
}