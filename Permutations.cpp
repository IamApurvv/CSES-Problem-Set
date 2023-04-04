#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 998244353;
void solve()
{
    ll n;
    cin >> n;
    if (n == 3 || n == 2)
        cout << "NO SOLUTION" << endl;
    else
    {
        for (ll i{1}; i <= n; i++)
        {
            if (i % 2 == 0)
                cout << i << " ";
        }
        for (ll i{1}; i <= n; i++)
        {
            if (i % 2 != 0)
                cout << i << " ";
        }
    }
}
int main()
{
    solve();
    return 0;
}