#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n+1);
    vector<ll>b(m);
    map<ll,ll>hsh;
    hsh.clear();
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        hsh[i*(n-i+1)-1]++;
    }
    for(int i=1;i<=n;i++)
    {
        hsh[i*(n-i)]+=(a[i+1]-a[i]-1);
    }
    ll x;
   while(m--)
   {
    cin>>x;
    cout<<hsh[x]<<" ";
   }
   cout<<endl;


}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
        /* code */
    }
    return 0;
}