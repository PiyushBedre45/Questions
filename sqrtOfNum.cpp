#include <iostream>
using namespace std;

int findInteger(int num)
{
    int start = 0;
    int end = num;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (mid * mid == num)
        {
            return mid;
        }
        if (mid * mid < num)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        // for (double j = ans; j * j < n; j = j + factor)
        // {
        //     ans = j;
        // }
        double j = ans;
        while (j * j < n)
        {
            ans = j;
            j = j + factor;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the Num whose sqrt u wanna find : " << endl;
    cin >> n;

    // cout << "Ans is : " << findInteger(n) << endl;

    int tempSol = findInteger(n);
    cout << "Ans is : " << morePrecision(n, 3, tempSol) << endl;
}