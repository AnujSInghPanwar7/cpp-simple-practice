// Write a function to split a string and convert it into an array of words.

// Examples (Input ==> Output):
// "Robin Singh" ==> ["Robin", "Singh"]

// "I love arrays they are my favorite" ==> ["I", "love", "arrays", "they", "are", "my", "favorite"]

#include<iostream>
#include<vector>
#include<string>
#include<sstream>

using namespace std;

vector<string> string_to_array(const string& s){
    vector<string> words;
    if(s.empty()){
        words.push_back("");
        return words;
    }
    istringstream iss(s);
    string token;
    while(iss>>token){
        words.push_back(token);
    }
    return words;
}
int main(){
    // string input="Anuj Singh Panwar";
    // string input2="I love arrays well i actually dont";
    // vector<string> result=string_to_array(input);
    // vector<string> result2=string_to_array(input2);

    // vector<string> result=string_to_array("Anuj Singh Panwar");
    vector<string> result2=string_to_array("I love arrays well i actually dont");
    vector<string> result=string_to_array("");
    cout<<"[";
    for (size_t i = 0; i < result.size(); i++)
    {
        cout<<"\""<<result[i]<<"\"";
        if(i!=result.size()-1){
            cout<<",";
        }
    }
    cout<<"]\n";

    cout<<"[";
    for (size_t i = 0; i < result2.size(); i++)
    {
        cout<<"\""<<result2[i]<<"\"";
        if(i!=result2.size()-1){
            cout<<",";
        }
    }
    cout<<"]";
    
    return 0;
}