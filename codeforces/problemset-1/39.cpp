#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll s_calc(ll x, ll y) {
    if (x == y) return x;

    ll dx = x ^ y;
    int dy = 63 - __builtin_clzll(dx);
    ll res = (1LL << (dy + 1)) - 1;
    return y | res;
}

void l_calc(int n, vector<ll>& a, ll& dx, ll& dy) {
    for (int i = 0; i < n; i++) {
        dx = min(dx, a[i]);
        dy = max(dy, a[i]);
    }
}

void solve() {
    int n;
    cin >> n;

    ll dx = LLONG_MAX, dy = LLONG_MIN;
    vector<ll> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    l_calc(n, a, dx, dy);

    cout << s_calc(dx, dy) << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}