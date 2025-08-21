// Write a function which converts the input string to uppercase.

#include<iostream>
#include<string>
#include<cctype>

using namespace std;

string makeUppercase(const string & input_str){
    string text = input_str;
    for(char &c : text){
        c = toupper(c);
    }
    return text;
}
int main(){
    string word;
    cout<<"Enter you word "<<endl;
    cin>>word;
    cout<<"Upper case word "<<makeUppercase(word);
    return 0;
}