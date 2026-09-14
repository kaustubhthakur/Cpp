#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
string s,t;
cin>>s>>t;
int n = s.size(),m = t.size();
ll dx=0;
for(int i=0;i<n;i++)
{
    if(s[i]=='?')
    {
        if(dx<m)s[i] = t[dx++];
        else s[i]='a';
    }
    else if(s[i]==t[dx])dx++;
}
if(dx>=m)cout<<"YES\n"<<s<<endl;
else cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}