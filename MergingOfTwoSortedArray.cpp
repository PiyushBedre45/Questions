#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr1 = {1, 2, 3, 5, 0, 0, 0};
    vector<int> arr2 = {2, 4, 6};

    int m = 4;
    int n = 3;

    int j = 0;
    for (int i = m; i < arr1.size(); i++)
    {
        arr1[i] = arr2[j];
        j++;
    }
    sort(arr1.begin(), arr1.end());
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }
}
