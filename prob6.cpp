// Write a function which calculates the average of the numbers in a given array.

// Note: Empty arrays should return 0.

#include <iostream>
#include <vector>

using namespace std;

double calcaverage(const vector<int> &values){
    if(values.empty()){
        return 0;
    }
    double sum = 0;
    for(int num:values){
        sum += num;
    }
    return sum/values.size();
}
int main(){
    vector<int> mynumber={1,2,3};
    cout<<"The average of these number are "<<calcaverage(mynumber);

    return 0;
}