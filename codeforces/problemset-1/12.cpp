#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
ll n;
cin>>n;
string str;
cin>>str;
str = "0"+str;
ll dx=0,dy=str[0];
for(int i=1;i<=n;i++)
{
  int d = str[i];
  if(dy!=d)
  {
    dx++;
  }
  dy = d;
}
if(dx>=3)
{
  cout<<dx-2+n<<endl;
}
else if(dx==2)
{
  cout<<dx-1+n<<endl;
}
else 
{
  cout<<dx+n<<endl;
}
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