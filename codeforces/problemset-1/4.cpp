#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    map<ll,ll>hsh;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        hsh[a[i]] =i;
    }

 ll j=0;
for(int i=1;i<n;i++)
{
    if(a[i-1]>a[i]) j=i;
}
if(j==0)
{
    cout<<"YES"<<endl;
    return ;
}
auto it = [&](ll i)
{
    ll d = min(a[i],a[i+1]);
    a[i] -=d;
    a[i+1]-=d;
};
for(ll i=0;i<j;i++)
{
    it(i);
}
    cout << (is_sorted(a.begin(), a.end()) ? "YES" : "NO") << '\n';

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