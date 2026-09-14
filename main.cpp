#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int mod = 998244353;
const int mx = 200000;

vector<ll> a, b;

ll binpw(ll a, ll e) {
    ll res = 1;
    while (e) {
        if (e & 1) res = res * a % mod;
        a = a * a % mod;
        e >>= 1;
    }
    return res;
}

void f_calc(vector<ll>& a, vector<ll>& b) {
    a.resize(mx + 1);
    b.resize(mx + 1);

    a[0] = 1;

    for (int i = 1; i <= mx; i++) {
        a[i] = a[i - 1] * i % mod;
    }

    b[1] = 1;

    for (int i = 2; i <= mx; i++) {
        b[i] = mod - (mod / i) * b[mod % i] % mod;
    }
}

void suff_arr(vector<ll>& arr, vector<ll>& sff, int n) {
    sff.resize(n + 1, 0);

    for (int i = n - 1; i >= 0; i--) {
        sff[i] = (sff[i + 1] + arr[i]) % mod;
    }
}

void g_calc(vector<ll>& arr, vector<ll>& sff, vector<ll>& b, ll dx, ll& dy, int n) {
    for (int i = 0; i < n - 1; i++) {
        int fx = n - 1 - i;
        ll fy = (sff[i + 1] - (ll)fx * (arr[i] % mod)) % mod;

        if (fy < 0) {
            fy += mod;
        }

        ll lx = fy * dx % mod * b[fx] % mod;
        dy = (dy + lx) % mod;
    }
}

void solve()
{
    int n;
    cin >> n;

    vector<ll> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    bool flg = true;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            flg = false;
            break;
        }
    }

    if (!flg) {
        cout << -1 << endl;
        return;
    }

    if (n == 1) {
        cout << 0 << endl;
        return;
    }

    vector<ll> sff;
    suff_arr(arr, sff, n);

    ll dx = a[n - 1];
    ll dy = 0;

    g_calc(arr, sff, b, dx, dy, n);

    cout << dy << endl;
}

int main() {

    int t;
    cin >> t;

    f_calc(a, b);

    while (t--) {
        solve();
    }

    return 0;
}