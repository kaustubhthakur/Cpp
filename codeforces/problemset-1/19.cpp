#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
ll n;
cin>>n;
string str;
cin>>str;
vector<ll>pre(n);
pre[0]=str[0]=='1';
for(int i=1;i<n;i++)
{
    pre[i] = pre[i-1]+(str[i]=='1');
}
auto sum = [&](int l,int r)
{
    if(l==0)return pre[r];
    return pre[r]-pre[l-1];
};
ll res=-1;
if(sum(0,n-1)>=(n+1)/2)
{
    res=0;
}
for(int i=0;i<n;i++)
{
    ll dx = sum(0,i);
    ll dy = i+1-dx;
    ll fx = sum(i+1,n-1);
    ll fy = n-i-1-fx;
    if(dy>=dx && fx>=fy)
    {
        if(abs(n-2*res)>abs(n-2*(i+1)))
        {
            res = i+1;
        }
    }
}
if(res==-1)res=0;
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
    return 0 ;
}