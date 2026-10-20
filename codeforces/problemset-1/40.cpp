#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void g_calc(int n, string str, ll &dx, ll &dy, ll &fx) {
    for (int i = 0; i < n; i++) {
        if (str[i] == '1') {
            if (dx == -1) dx = i;
            dy = i;
            fx++;
        }
    }
}

ll s_solve(ll fx, ll dx, ll dy) {
    ll res = 0;
    if (fx == 1) {
        res = 0;
    } else if (fx == 2) {
        res = 1;
    } else {
        res = dy - dx;
    }
    return res;
}

void solve() {
    int n;
    string str;
    cin >> n >> str;

    ll fx = 0;
    ll dx = -1, dy = -1;

    g_calc(n, str, dx, dy, fx);

    ll res = s_solve(fx, dx, dy);

    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}