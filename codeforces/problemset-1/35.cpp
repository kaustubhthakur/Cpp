#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void pref(vector<int>& a, vector<int>& pf, int n, int k) {
    pf.assign(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        pf[i] = (pf[i - 1] + (a[i - 1] % k)) % k;
    }
}

void f_calc(vector<int>& pf, vector<int>& b, int n, int k, long long& dx) {
    for (int j = 0; j <= n; ++j) {
        int i = j - k - 1;
        if (i >= 0) {
            b[pf[i]]++;
        }
        dx += b[pf[j]];
    }
}
void solve()
{
    int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<int> pf;
        pref(a, pf, n, k);

        vector<int> b(k, 0);
        ll dx = 0;

        f_calc(pf, b, n, k, dx);

        cout << dx <<endl;
}
int main() {
   
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}