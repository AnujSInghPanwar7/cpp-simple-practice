// Clock shows h hours, m minutes and s seconds after midnight.

// Your task is to write a function which returns the time since midnight in milliseconds.

// Example:
// h = 0
// m = 1
// s = 1

// result = 61000
// Input constraints:

// 0 <= h <= 23
// 0 <= m <= 59
// 0 <= s <= 59

// Important details:
// 1 second = 1000 milliseconds

// 1 minute = 60 seconds = 60,000 milliseconds

// 1 hour = 60 minutes = 3,600 seconds = 3,600,000 milliseconds

#include<iostream>

using namespace std;

int past(int h, int m, int s) {
    int invalid;
    if(h,m,s<0)
    return invalid;
    int milliseconds=h*3600000 + m*60000 + s*1000;
    return milliseconds;
}
int main(){
    int time;
    cout<<past(1,1,1);
    return 0;
}