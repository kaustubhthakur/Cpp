#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll a[n+10];
    for(int i=1;i<=10;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    ll fx = 0,fy=k;
    for(int i=1;i<=n;i++)
    {
        ll dx = (n-i+1);
        ll dy = dx*a[i]+fx;
        fx+=a[i];
        if(dy>=k)
        {
            break;
        }
        else 
        {
            fy++;
        }
    }
    cout<<fy<<endl;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
    long long n,k;
       cin>>n>>k;
       long long arr[n+10];
       for(int i=1;i<=n;i++)
       {
           cin>>arr[i];
       }
       sort(arr+1,arr+n+1);
       long long presum=0,ans=k;
       for(int i=1;i<=n;i++)
       {
          long long mul=(n-i+1);
          long long sum=mul*arr[i]+presum;
          presum+=arr[i];
          if(sum>=k)
          {
              break;
          }
          else
          {
              ans++;
          }

       }
       cout<<ans<<endl;
    }
    return 0;
}