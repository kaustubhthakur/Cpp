#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll g_calc(ll x, ll dx) {
    ll dy;

    if (dx <= x + 1) {
        ll fx = 2LL*x,fy = dx+3;
        dy = dx * (fx - fy) / 2;
    } else {
        ll fx = x+1,fy = (x+2)/2, fz = dx-x-1;
        dy = 1LL * fx * fy + fz;
    }

    return dy;
}

ll f_calc(int cnt) {
    ll mx = 0;

    for (int i = 0; i <= cnt; i++) {
        ll dx = cnt - i;
        ll dy = g_calc(i, dx);

        mx = max(mx, dy);
    }

    return mx;
}

void solve() {
 
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}