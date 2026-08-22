#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
 ll n,c;
 cin>>n>>c;
 vector<ll>a(n);
 for(int i=0;i<n;i++)
 {
    cin>>a[i];
 }
 sort(a.begin(),a.end());
 for(int i=0;i<n;i++)
 {
    a[i]-=c;
 }
 for(ll i=0;i<n/2;i++)
 {
    a[i] = max(a[i],0ll);
 }
 ll sm = accumulate(a.begin(),a.end(),0ll);
 cout<<sm<<endl;
 

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