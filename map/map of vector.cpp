#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    map<ll, v64> m;
    forn(i, n)
    {
        cin >> arr[i];
        m[arr[i]].pb(i);
    }
    for (auto t : m)
    {
        cout << t.first << "-->";
        for (auto x : t.second)
        {
            cout << x << " ";
        }
        cout << ln;
    }
    cout << ln;
    return 0;
}