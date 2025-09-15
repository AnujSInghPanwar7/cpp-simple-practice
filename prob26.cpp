// Check to see if a string has the same amount of 'x's and 'o's. The method must return a boolean and be case insensitive. The string can contain any char.

// Examples input/output:

// XO("ooxx") => true
// XO("xooxx") => false
// XO("ooxXm") => true
// XO("zpzpzpp") => true // when no 'x' and 'o' is present should return true
// XO("zzoo") => false

#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

bool OX(const string &orig)
{
    string str=orig;
    transform(str.begin(),str.end(),str.begin(),::tolower) ;
    int x_count = 0;
    int o_count = 0;


    for(char c: str)
    { 
        // transform(str.begin(),str.end(),str.begin(),::tolower);
        if(c=='x'){
        x_count++;
        }
        else if(c=='o'){
            o_count++;
        }
    }
    return ( x_count == o_count);
}
int main()
{
    string lmao = "zz";
    cout << OX(lmao);
    return 0;
}