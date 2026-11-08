    #include <bits/stdc++.h>
    #define int long long
    using namespace std;


    void solve()
{
int n;
        cin>>n;
        int first;
        cin>>first;
        int mn,mx,ans;
        mn=mx=ans=first;
        n--;
        while(n--) {
            int x;
            cin>>x;
            ans=max({ans,x,x-mn,x-mx,x+mn,x+mx});
            int nmn = min({x,mn+x, 2*mn+x,mx+x, 2*mx+x});
            int nmx = max({x,mn+x, 2*mn+x,mx+x, 2*mx+x});
            mn=nmn;
            mx=nmx;
        }
        cout<<ans<<endl;
}
    signed  main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            solve();
        }
        return 0;
    }