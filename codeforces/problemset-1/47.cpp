#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void f_calc(ll i, ll dx, ll &dy, vector<ll> &b) {
    if ((b[i] & 1) == dx) dy++;
}

void solve() {
    ll n, k;
    cin >> n >> k;

    ll dx = k & 1;
    ll fx = 0, dy = 0;

    vector<ll> a(n), b(n);

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
      
    }

    for (ll i = 0; i < n; i++) {
        cin >> b[i];
     
    }
 for (ll i = 0; i < n; i++) {
      
        f_calc(i, dx, fx, a);
    }
	 for (ll i = 0; i < n; i++) {
      
        f_calc(i, dx, dy, b);
    }
    cout << (fx <= dy ? "YES" : "NO") << endl;
}

int main() {
    ll t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}