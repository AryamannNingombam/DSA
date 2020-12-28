#include <iostream>
#include <vector>
#include <cmath>

/*
 understood the logic but coudn't understand the code
 a lot;
 
 */

using namespace std;
using sVector = vector<string>;

sVector returnSubsets(const string &s){
    sVector result;
    int totalSubsets = pow(2,s.size());
    string temp;
    
    for (int i{};i<totalSubsets;i++){
        for (int j{};j<s.size();j++){
            if (i & 1<<j)temp.push_back(s[j]);
        };
        
        if (temp  =="")continue;
        result.push_back(temp);
        temp.clear();
        
        
    }
    
    
    return result;
    
};
