#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 998244353;
void solve()
{
    ll n;
    cin >> n;
    cout << n << " ";
    while (n != 1)
    {
        if (n % 2 == 0)
            n = n / 2;
        else
            n = (n * 3) + 1;
        cout << n << " ";
    }
}
int main()
{
    solve();
    return 0;
}