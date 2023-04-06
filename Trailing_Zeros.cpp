#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 998244353;
void solve()
{
    ll n;
    cin >> n;
    ll multiple{5}, ans{0};
    while (multiple <= n)
    {
        ans += n / multiple;
        multiple *= 5;
    }
    cout << ans << endl;
}
int main()
{
    solve();
    return 0;
}