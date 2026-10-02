#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
void solve()
{
ll n;
cin>>n;
vector<ll>a(n),b(n);
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a.begin(),a.end());
for(int i=0;i<n;i++)
{
    cin>>b[i];
}
sort(b.begin(),b.end(),greater<>());
ll res=1;
for(int i=0;i<n;i++)
{
    ll d = a.size()-(upper_bound(a.begin(),a.end(),b[i])-a.begin());
    res = res*max(d-i,0ll)%mod;
}
cout<<res<<endl;
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