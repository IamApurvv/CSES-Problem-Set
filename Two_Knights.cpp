#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 998244353;
void solve()
{
    ll n;
    cin >> n;
    cout << 0 << endl;
    for (ll i{2}; i <= n; i++)
    {
        ll total_ways{};
        total_ways = (i * i) * (i * i - 1) / 2;
        ll attacking_squares{};
        attacking_squares = 4 * (i - 1) * (i - 2);
        cout << total_ways - attacking_squares << endl;
    }
}
int main()
{
    solve();
    return 0;
}