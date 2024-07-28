#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {0, 1, 0, 3, 12};
    vector<int> zeroArr;
    vector<int> newArr;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeroArr.push_back(arr[i]);
        }
        else
        {
            newArr.push_back(arr[i]);
        }
    }
    for (int i = 0; i < zeroArr.size(); i++)
    {
        newArr.push_back(zeroArr[i]);
    }
    for (int i = 0; i < newArr.size(); i++)
    {
        cout << newArr[i] << " ";
    }
}