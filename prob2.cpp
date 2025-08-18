// Create a function that gives a personalized greeting. This function takes two parameters: name and owner.

// Use conditionals to return the proper message:

// case	return
// name equals owner	'Hello boss'
// otherwise	'Hello guest'

#include <iostream>

using namespace std;
string greet(const string &name, const string &owner)
{
    if (name == owner)
    {
        return "Hello Boss";
    }
    else
        (name != owner);
        {
            return "Hello guest";
        }
}
int main()
{
    cout << greet("daniel" , "daniel") << endl;
    cout << greet("daniel", "greg") << endl;
    return 0;
}