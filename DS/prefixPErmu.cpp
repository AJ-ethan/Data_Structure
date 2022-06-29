#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll k, n;
    cin >> n >> k;
    ll a[k];
    for (ll i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    vector<ll> v;
    for (ll i = a[0]; i >= 1; i--)
    {
        v.push_back(i);
    }
    for (ll i = 1; i < k; i++)
    {
        ll temp = a[i];
        while (temp > a[i - 1])
        {
            v.push_back(temp);
            temp--;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
