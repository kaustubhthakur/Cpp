#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<ll>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    ll dist = (a-c)*(a-c) + (b-d)*(b-d);
    ll s=0,mx=0;
    for(int i=0;i<n;i++)
    {
     s+=ar[i];
     mx = max(ar[i],mx);
    }
    if(s*s<dist)
    {
        cout<<"No"<<endl;
        return;
    }
    ll mn = max(2*mx-s,0ll);
    if(mn*mn>dist)
    {
        cout<<"No"<<endl;
        return;
    }
    cout<<"Yes"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}