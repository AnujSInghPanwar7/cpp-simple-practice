// Consider an array/list of sheep where some sheep may be missing from their place.
// We need a function that counts the number of sheep present in the array (true means present).

// For example,

// { true,  true,  true,  false,
//   true,  true,  true,  true,
//   true,  false, true,  false,
//   true,  false, false, true,
//   true,  true,  true,  true,
//   false, false, true,  true } 

#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int count_sheep(vector<bool> arr)
{
    // int sum = 0;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (arr[i] == true)
    //     {
    //         sum = sum+1;
    //     }
    //     // else
    //     // {
    //     //     break;
    //     // }
    // }
    // return sum;

    return count(arr.begin(),arr.end(),true);
}

int main()
{
    vector<bool> sheep_present={ true,  true,  true,  false,
  true,  true,  true,  true,
  true,  false, true,  false,
  true,  false, false, true,
  true,  true,  true,  true,
  false, false, true,  true } ;
  cout<<count_sheep(sheep_present)<<" sheep are present";
    return 0;
}