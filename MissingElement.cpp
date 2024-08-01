// Input  -  arr[5] = {1 2 4 5};
// Output -  3  because 3 is missing in the arr

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {0, 1, 2, 3, 5};
    int n = arr.size();
    int xor1 = 0;
    int xor2 = 0;

    for (int i = 0; i < n - 1; i++)
    {
        xor1 = xor1 ^ (i + 1); // n    = 5 : {0, 1,2,3,5};
        xor2 = xor2 ^ arr[i];  // n-1  = 4 : {0, 1,2,3,5};
    }

    cout << (xor1 ^ xor2);
}

// 1 . Above one (XOR) is an Optimal Aproach

// 2 . Sum of all Element (1 to n ) - Sum of Array Ele = Missing element

// 3 . Use Hasshing : make freq of all arr ele to -> 1 , get missing ele with freq -> 0

// 4 . double for loop