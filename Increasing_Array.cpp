#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 998244353;
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i{}; i < n; i++)
        cin >> a[i];
    ll count{};
    for (ll i{1}; i < n; i++)
    {
        if ((a[i] - a[i - 1]) < 0)
        {
            count += abs(a[i] - a[i - 1]);
            a[i] = a[i - 1];
        }
    }
    cout << count << endl;
}
int main()
{
    solve();
    return 0;
}