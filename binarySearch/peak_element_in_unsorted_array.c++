// here peak element means element that is greater than his both neighbour
#include <bits/stdc++.h>
using namespace std;

int peak(vector<int> v, int l, int r, int key)
{
    int res;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (mid > 0 && mid < v.size() - 1)
        {
            if (v[mid]>v[mid-1]&&v[mid]>v[mid-1])
            {
                return v[mid];
            }
            else if (key > v[mid])
                l = mid + 1;
            else
                r = mid - 1;
        }
    }
}

int main()
{
    int n, key;
    cin >> n >> key;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << peak(v, 0, n - 1,key);
}