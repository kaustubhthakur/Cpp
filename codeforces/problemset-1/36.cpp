#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    ll dx=0,dy=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            dx++;
        }
    }
    dy = n-dx;
    for(int i=0;i<n-1;i++)
    {
        if(dx==0 or dy==0)
        {
            cout<<"No"<<endl;
            return;
        }
        if(t[i]=='1')dx--;
        else dy--;
    }
    cout<<"Yes"<<endl;
}
int main() {
   
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}