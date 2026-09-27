#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll g_calc(ll  n, ll k) {
        return 2LL * (k - 1) + (1LL << (n - k + 1));
    }
void solve()
{
ll n,m;
cin>>n>>m;
ll ans = g_calc(n,m);
cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}