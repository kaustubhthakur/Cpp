#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void f_calc(ll dx, ll dy) {
    if ((dx == 3 && dy == 0) || (dx == 1 && dy == 1))
        cout << "Larpity" << endl;
    else
        cout << "Moggity" << endl;
}

void solve()
{
      ll n;
        cin >> n;

        ll dx = 0, dy = 0;
        vector<ll> a(n);
       for (ll i = 0; i < n; i++ ) {
            cin >> a[i];
       }
        for (ll i = 0; i < n; i++) {
           
            if (a[i] %2== 1) dx++;
            else dy++;
        }

        f_calc(dx, dy);  
}
int main() {
   
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}