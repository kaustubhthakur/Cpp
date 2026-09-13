#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
ll n,m;
cin>>n>>m;
vector<ll>a(n);
for(int i=0;i<n;i++)
{
    cin>>a[i];
    a[i]%=m;
    if(!a[i]) a[i] =m;
}
vector<ll>b(n);
    iota(b.begin(), b.end(), 0);

stable_sort(b.begin(),b.end(),[&](int i,int j)
{
    return a[i]>a[j];
});
for(auto it:b)
{
    cout<<it+1<<" ";
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
    
}