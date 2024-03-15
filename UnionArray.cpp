#include <iostream>

using namespace std;
#include <set>
#include <vector>

int main()
{
    // vector<int> a;
    vector<int> temp;
    int a[6] = {1, 1, 3, 4, 5, 6};
    int b[3] = {1, 2, 4};

    // int b = b.size();

    set<int> st;

    for (int i = 0; i < 6; i++)
    {
        st.insert(a[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        st.insert(b[i]);
    }
    for (auto it : st)
    {
        temp.push_back(it);
    }
    int n = temp.size();
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
}