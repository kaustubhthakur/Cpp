#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

ll fact(ll x)
{
    if(x==1 or x==0) return 1;
    return x*fact(x-1);
}
void solve() {
 ll n;
    cin >> n;
    ll d;
    cin >> d;
    vector<ll> ans;
    ans.push_back(1);
    for (ll i = 3; i <= 9; i += 2)
    {
        ll r = 1;
        ll num = d;
        bool f = true;
        while (num % i)
        {
            num *= 10;
            num += d;
            num %= i;
            r++;
            if (r >= i + 1)
            {
                f = false;
                break;
            }
        }
        if (!f)
        {
            continue;
        }
        if (n >= r)
        {
            ans.push_back(i);
        }
        else
        {
            ll val = 1;
            for (ll j = 1; j <= n; j++)
            {
                val *= j;
            }
            if (val % r == 0)
            {
                ans.push_back(i);
            }
        }
    }
   for(auto it:ans)
   {
    cout<<it<<" ";
   }
   cout<<endl;


}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}