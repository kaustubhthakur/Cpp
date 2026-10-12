#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 void g_calc(ll n, ll m) {
        if (m <= n && (n % 2) == (m % 2)) {
            cout << n << endl;
        }
        else if (m <= n + 1 && ((n + 1) % 2) == (m % 2)) {
            cout << n + 1 << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
void solve()
{
     ll n, m;
            cin >> n >> m;

            g_calc(n, m);
   
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