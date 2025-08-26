// The tests will always use some integral number, so don't worry about that in dynamic typed languages.

// Examples
// -1  =>  false
//  0  =>  true
//  3  =>  false
//  4  =>  true
// 25  =>  true
// 26  =>  false

#include<iostream>
#include<math.h>

using namespace std;

bool is_square(int n){
    int m=sqrt(n);
    if(n<0){
        return false;
    }
    else if(m!=sqrt(n)){
    return false;
    }
        return true;
}
int main(){
    int x = 4;
    int y = 5;
    cout<<is_square(x);
    cout<<is_square(y);
    return 0;
}