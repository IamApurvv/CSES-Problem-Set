#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 998244353;
void solve()
{
    string s;
    cin >> s;
    vector<ll> v;
    ll count{};
    if (s.size() == 1)
        cout << 1 << endl;
    else
    {
        for (ll i{}; i < ll(s.length()) - 1; i++)
        {
            if (s[i] == s[i + 1])
                count++;
            else
            {
                v.push_back(count);
                count = 0;
            }
        }
        v.push_back(count);
        cout << *max_element(v.begin(), v.end()) + 1 << endl;
    }
}
int main()
{
    solve();
    return 0;
}