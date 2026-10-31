#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll sum(vector<ll>& a, ll dx) {
    ll dy = 0;

    for (ll x : a) {
        dy += llabs(x - dx);
    }

    return dy;
}

void solve() {
    ll n;
    cin >> n;

    vector<ll> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a.begin(), a.end());

    ll dx = a[n / 2], res = sum(a, dx);
    

    cout << res << ' ' << a.back() - a.front() << endl;
}

int main() {

    ll t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}