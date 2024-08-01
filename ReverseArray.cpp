// Input : arr[] = { 1 2 3 4 5}
// Output : arr[] = { 5 4 3 2 1}

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> rev;

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        rev.push_back(arr[i]);
    }
    for (int i = 0; i < rev.size(); i++)
    {
        cout << rev[i] << " ";
    }
}