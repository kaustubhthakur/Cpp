
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    if(n<=3){cout<<-1<<endl;return;}
    ll dx=1,dy=4;
    vector<ll>d(n+1);
    for(int i=1;i<=n;i++)
    {
        d[i]=i;
    }
   for(ll i=1;i<=n;i++)
   {
    if(i==1)
    {
        swap(d[i],dy);
    }
    if(i==4)
    {
        swap(d[i],dx);
    }

   }
   for(auto it=1;it<=n;it++)
   {
    cout<<d[it]<<" ";
   }
   cout<<endl;
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