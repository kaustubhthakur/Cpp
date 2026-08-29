#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
ll n,x,y,k;
cin>>n>>k>>x;
vector<ll>a(n);
for(int i=0;i<n;i++)
{
    cin>>a[i];
}

   vector<int> b;

 
 ll sm = accumulate(a.begin(), a.end(), 0ll);
    if (sm * k < x){
        cout << 0 << '\n';
        return;
    }
     ll l = 1, r = n * k;
    while(l <= r){
        ll m = l + (r - l) / 2;
        ll cnt_a = (n * k - m + 1) / n;
        ll suff = (n * k - m + 1) % n;
        ll sum = cnt_a * sm;
        for (int i = n - suff; i < n; i++){
            sum += a[i];
        }
        if (sum < x){
            r = m - 1;
        }
        else{
            l = m + 1;
        }
    }

    cout << r << '\n';
}
int main() {
int t;
cin>>t;
while(t--)
{
    solve();
}
return 0;
}