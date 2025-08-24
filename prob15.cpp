// Given an array of integers your solution should find the smallest integer.

// For example:

// Given [34, 15, 88, 2] your solution will return 2
// Given [34, -345, -1, 100] your solution will return -345
// You can assume, for the purpose of this kata, that the supplied array will not be empty.

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int findsmallest(vector<int> list){
    int small=list[0];
    for(int i = 1; i < list.size(); i++){
        if(list[i]<small){
            small=list[i];
        }
        
        
    }
   return small;
    
}

int main(){
    vector<int> number={96,56,9999,-9876};
    cout<<findsmallest(number);
    return 0;
}
