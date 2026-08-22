#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    vector<ll>dp(n+1);
    dp[n]=1;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=1;j<=6;j++)
        {
            if(j<=n-i){
            dp[i]=(dp[i]+dp[i+j])%mod;
        }
    }
    }    
    cout<<dp[0]<<endl;
    return 0;
}