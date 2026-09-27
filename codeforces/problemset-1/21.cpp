#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f_calc(ll x) {
    ll dx = 0;

    while (x > 0) {
        ll dy = x % 10;
        dx += dy * dy;
        x /= 10;
    }

    return dx;
}

ll p_calc(ll x) {
    for (ll j = 0; j < 100; ++j) {
        x = f_calc(x);
    }

    return x;
}

ll h_calc(unordered_map<ll, ll>& hsh) {
    ll px = 0;

    for (auto &p : hsh) {
        ll py = p.second;
        px += py * (py - 1) / 2;
    }

    return px;
}

void solve() {
    ll n;
    cin >> n;

    vector<ll> a(n);

    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }

    unordered_map<ll, ll> hsh;

    for (ll i = 0; i < n; ++i) {
        ll h = p_calc(a[i]);
        hsh[h]++;
    }

    ll px = h_calc(hsh);

    cout << px << endl;
}

int main() {
    ll t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}