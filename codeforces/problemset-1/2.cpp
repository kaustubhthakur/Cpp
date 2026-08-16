#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
 ll n;
 cin>>n;
 vector<ll>a(n),b(n);
 for(int i=0;i<n;i++)
 {
    cin>>a[i];
 }
 for(int i=0;i<n;i++)
 {
    cin>>b[i];
 }
 ll cnt=0;
 for(int i=0;i<n;i++)
 {
    if(a[i]==b[i])
    {
        cnt++;
    }
 }
 if(cnt==n) { cout<<0<<endl; return ; }
 if(cnt==0) { cout<<1<<endl; return ; }
 
 ll dx=0,dy=0;
 for(int i=0;i<n;i++)
 {
    if(a[i]==1)
    {
        dx++;
    }
    else 
    {
        dy++;
    }
 }





}

int main()
{
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}