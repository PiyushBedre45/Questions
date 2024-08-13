#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <set>

using namespace std;

int main()
{
    vector<int> arr1 = {6, 0, 2, 3, 4, 6, 0, 0, 0};
    vector<int> arr2 = {1, 2, 0, 4, 5, 0, 3};
    set<int> temp;
    for (int i = 0; i < arr1.size(); i++)
    {
        if (arr1[i] != 0) // IF WE DONT WANT '0' IN ANS
        {
            temp.insert(arr1[i]);
        }
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        if (arr2[i] != 0)
        {
            temp.insert(arr2[i]);
        }
    }
    for (auto &pr : temp)
    {
        cout << pr << " ";
    }
    cout << endl;

    return 0;
}
