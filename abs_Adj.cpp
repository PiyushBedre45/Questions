#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> arr = {1, 3, 2};
    int n = arr.size();

    sort(arr.begin(), arr.end());

    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum = sum + abs(arr[i] - arr[i - 1]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "sum : " << sum << endl;
}