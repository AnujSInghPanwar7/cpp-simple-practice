// Build a function that returns an array of integers from n to 1 where n>0.

// Example : n=5 --> [5,4,3,2,1]

#include<iostream>
#include<vector>


using namespace std;

vector<int> reverseseq(int n){
    vector<int> result;
    for(int i = n ; i>=1 ; i--){
        result.push_back(i);
    }
    return result;
}

int main(){
    int num;
    cout<<"Enter the number "<<endl;
    cin>>num;
    vector<int> number=reverseseq(num);
    cout<<"[";
    for(size_t i=0;i<number.size();i++){
        cout<<number[i];
        if(i!=number.size()-1){
            cout<<",";
        }
    } 
    cout<<"]";

    return 0;
}
