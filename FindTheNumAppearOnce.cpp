// Find the Number which are present in an array once

#include <iostream>
using namespace std;

int findOnce(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (num == arr[j])
            {
                count += 1;
            }
        }
        if (count == 1)
        {
            return num;
        }
    }
}

int main()
{
    int n = 7;
    int arr[n] = {1, 1, 2, 2, 3, 3, 4};
    int ans = findOnce(arr, 7);
    cout << ans;
}