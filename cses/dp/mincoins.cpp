#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    ll n,x;
    cin>>n>>x;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<ll>dp(x+1,1e9);
    dp[0]=0;
    for(int i=1;i<=x;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]<=i)
            {
                dp[i] = min(dp[i],dp[i-a[j]]+1);
            }
        }
    }
    cout<<(dp[x]<1e9?dp[x]:-1)<<endl;
    return 0;
}