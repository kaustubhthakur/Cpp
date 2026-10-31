
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void g_calc(vector<ll>& a, vector<ll>& b, ll n) {
    for (ll i = 0; i < n; i++) {
        if (i % 2 == 0) b[i] = a[i];
        else b[i] = -a[i];
    }
}

ll f_calc(vector<ll>& b, ll n, ll q) {
    ll ans = 0;

    for (ll i = 0; i < q; i++) {
        ans -= b[i];
    }

    for (ll i = q; i < n; i++) {
        ans += b[i];
    }

    return ans;
}

void solve() {
    ll n;
    cin >> n;

    vector<ll> a(n), b(n);

    for (ll i = 0; i < n; i++) cin >> a[i];

    g_calc(a, b, n);

    sort(b.begin(), b.end());

    ll q = n / 2;
    ll ans = f_calc(b, n, q);

    cout << ans << endl;
}

int main() {
    ll t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
