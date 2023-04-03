#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 998244353;
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i{}; i < n - 1; i++)
        cin >> a[i];
    sort(a, a + n);
    for (ll i{}; i < n; i++)
    {
        if (a[i] != (i + 1))
        {
            cout << i + 1 << endl;
            break;
        }
    }
}
int main()
{
    solve();
    return 0;
}