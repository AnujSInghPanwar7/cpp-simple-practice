// Implement a function which convert the given boolean value into its string representation.

// Note: Only valid inputs will be given.

#include<iostream>

using namespace std;
string boolean_to_string(bool b){
    if (b==true){
        return "True";
    }
    else{
        return "False";
    }
}

bool isfun=true;
bool noo=false;
int main(){
    boolean_to_string("true");
    cout<<isfun<<endl;
    cout<<noo<<endl;
    return 0;
}