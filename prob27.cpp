// Trolls are attacking your comment section!

// A common way to deal with this situation is to remove all of the vowels from the trolls' comments, neutralizing the threat.

// Your task is to write a function that takes a string and return a new string with all vowels removed.

// For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".

// Note: for this kata y isn't considered a vowel.
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string disemvowel(const string& str){
    string toRemove="aeiouAEIOU";
    string result="";
    for(char c: str){
        if(toRemove.find(c)==string::npos){
            result +=c;
        }
    }
    return result;
}

int main(){
    cout<<disemvowel("This website is for losers LOL!");

    return 0;
}