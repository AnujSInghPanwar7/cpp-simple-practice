// Given a random non-negative number, you have to return the digits of this number within an array in reverse order.

// Example (Input => Output):
// 35231 => [1,3,2,5,3]
// 0     => [0]

#include<iostream>
#include<vector>

using namespace std;
vector <int> digitize(unsigned long n){
    vector<int> digit;
    if(n==0){
        digit.push_back(0);
    }
    while(n>0){
        digit.push_back(n%10);
        n /=10;
    }
    return digit;
}
int main(){
    unsigned long number;
    cout<<"Enter a non negative number ";
    cin>>number;
    vector<int> result = digitize(number);
    cout<<"Digits in reverse order ";
    for(int digit : result){
        cout<<digit<<" ";
    }
    cout<<endl;
    return 0;
}