#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
ll n;
cin>>n;
string str;
cin>>str;
vector<ll>pos;
for(int i=0;i<n;i++)
{
    if(str[i]=='0')
    {
        pos.push_back(i+1);
    }
}
cout<<pos.size()<<endl;
for(auto it:pos)
{
    cout<<it<<" ";
}
cout<<endl;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}