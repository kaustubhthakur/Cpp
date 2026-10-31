
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool f_calc(string s, string r) {
    vector<ll> dx(26, 0), dy(26, 0);

    for (auto it : s) dx[it - 'a']++;
    for (auto it : r) dy[it - 'a']++;

    for (ll i = 0; i < 26; i++) {
        if (dx[i] < dy[i]) {
            return false;
        }
    }

    return true;
}

void solve() {
    string s, r;
    cin >> s >> r;
    bool flg =f_calc(s, r); 
    if (flg) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}