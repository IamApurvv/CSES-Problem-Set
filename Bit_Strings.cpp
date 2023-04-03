#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 998244353;
void solve()
{
    ll n, ans{1};
    ll m = 1e9 + 7;
    cin >> n;
    for (ll i{}; i < n; i++)
        ans = (ans * 2) % m;
    cout << ans << endl;
}
int main()
{
    solve();
    return 0;
}