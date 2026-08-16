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

ll fx=0,fy=0,fz=0,res=0;
for(int i=0;i<n;i++)
{
    if(a[i]!=b[i])
    {
        if(a[i]==1)fx++;
        else fy++;
    }
    else 
    {
        if(a[i]) fz++;
        else res++;
    }
}
if(!fy && !fx)cout<<0<<endl;
else if(fx%2) cout<<1<<endl;
else if(res && fz) cout<<2<<endl;
else if(fx>0) cout<<2<<endl;
else cout<<-1<<endl;




}

int main()
{
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}