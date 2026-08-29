#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;

void tc()
{
    ll n,m;
    cin>>n>>m;

    vector<vll> ve(n,vll(m));

    for(auto &v:ve)
        for(auto &x:v)
            cin>>x;

    vll sum(n);

    for(ll i=0;i<n;i++)
        sum[i]=accumulate(ve[i].begin(),ve[i].end(),0LL);

    vll p(n);
    iota(p.begin(),p.end(),0);

    sort(p.begin(),p.end(),[&](ll a,ll b)
    {
        return sum[a]>sum[b];
    });

    ll ans=0;

    for(ll i=0;i<n;i++)
    {
        ll r=p[i];

        vll pre(m);
        pre[0]=ve[r][0];

        for(ll j=1;j<m;j++)
            pre[j]=pre[j-1]+ve[r][j];

        for(ll j=0;j<m;j++)
            ans+=pre[j];

        ans+=sum[r]*(n-1-i)*m;
    }

    cout<<ans<<'\n';
}

int main()
{

    ll T;
    cin>>T;

    while(T--)
        tc();
}