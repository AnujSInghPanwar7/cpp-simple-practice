// Ben has a very simple idea to make some profit: he buys something and sells it again. Of course, 
// this wouldn't give him any profit at all if he was simply to buy and sell it at the same price. Instead,
//  he's going to buy it for the lowest possible price and sell it at the highest.

// Task
// Write a function that returns both the minimum and maximum number of the given list/array.

// Examples (Input --> Output)
// [1,2,3,4,5] --> [1,5]
// [2334454,5] --> [5,2334454]
// [1]         --> [1,1]
// Remarks
// All arrays or lists will always have at least one element, so you don't need to check the length.
//  Also, your function will always get an array or a list, you don't have to check for null, undefined or similar.

#include<iostream>
#include<sstream>
#include<climits>
#include<vector>
#include<utility>

using namespace std;

vector<int> min_max(const vector<int>  &numbers){
    // vector<int> num;
    int lowest = INT_MAX;
    int highest = INT_MIN;
    for(int i = 0; i < numbers.size(); i++){
        if(numbers[i] > highest)
        highest = numbers[i];

        if(numbers[i]< lowest){
            lowest = numbers[i];
        }
    }
    return {lowest,highest};
}
int main(){
    vector<int> count={1,2,3,4,5};
    vector<int> result=min_max(count);
    cout<<"["<<result[0]<<","<<result[1]<<"]";
    return 0;
}