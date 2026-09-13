#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
ll n;
cin>>n;
vector<pair<ll,ll>>pr(n);
for(int i=0;i<n;i++)
{
    cin>>pr[i].first>>pr[i].second;
}
ll a,b,c,d;
cin>>a>>b>>c>>d;
ll dx = (a-c)*(a-c)+(b-d)*(b-d);
for(int i=0;i<n;i++)
{
    ll dy = (pr[i].first-c)*(pr[i].first-c)+(pr[i].second-d)*(pr[i].second-d);
    if(dy<=dx)
    {
        cout<<"NO"<<endl;
        return;
    }
}
cout<<"YES"<<endl;
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
    
}