#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
void solve()
{
ll n;
cin>>n;
string str;
cin>>str;
bool flg = is_sorted(str.begin(),str.end());
if(flg){cout<<0<<endl;return;}
ll dx=0,dy=0;
for(int i=0;i<n;i++){if(str[i]=='1'){dx++;}else {dy--;}}

ll res = 0;
if(str[0]=='1')
{
res = -1;
cout<<res+dx+dy<<endl;
}
else{
dy--;
cout<<min(INT_MAX,dy+dy)<<endl;
}
}
int main() {
int t;cin >> t;while (t--) {solve();}
}