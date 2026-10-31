
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

char f_calc(ll a, ll b, ll c) {
    char chr;

    if (b >= c) {
        chr = 'R';
    } else if (c >= a) {
        chr = 'S';
    } else {
        chr = 'P';
    }

    return chr;
}

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;

    ll dx = a + b + c;
    char chr = f_calc(a, b, c);

    cout << string(dx, chr) << '\n';
}

int main() {

    ll t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
