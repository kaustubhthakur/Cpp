#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
ll n;
cin>>n;
string str;
cin>>str;
ll dx=0,dy=0;
for(int i=0;i<n;i++)
{
    if(str[i]=='(')dx++;
    else dy++;
}
dx = n/2-dx;
dy = n/2-dy;
ll res=0;
vector<ll>b;
for(int i=0;i<n;i++)
{
    if(str[i]=='(')
    {
        b.push_back(i);
    }
    else if(str[i]==')')
    {
        res+=(i-b.back());
        b.pop_back();
    }
    else 
    {
        if(b.size())
        {
            res+=(i-b.back());
            b.pop_back();
        }
        else 
        {
            b.push_back(i);
        }
    }
    
}
cout<<res<<endl;
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
    return 0;
}