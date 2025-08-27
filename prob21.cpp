// Very simple, given a number (integer / decimal / both depending on the language), find its opposite (additive inverse).

// Examples:

// 1: -1
// 14: -14
// -34: 34

#include<iostream>

using namespace std;

float opposite(float number){
    return number-(2*number);
}
int main(){
    float num=3;
    cout<<opposite(num);
    return 0;
}