#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll f_calc(vector<ll>& a, int dx, int dy, int n) {
    ll px = 0;

    if (dx <= dy) {
        for (int i = 0; i < dx; ++i) {
            px += min(a[i], a[n - 1 - i]);
        }
    } else {
        int d = dy;

        for (int i = 0; i < d; ++i) {
            px += min(a[i], a[n - 1 - i]);
        }

        for (int i = d; i < n - d; ++i) {
            px += a[i];
        }
    }

    return px;
}

void solve() {
  
        int n, k;
        cin >> n >> k;

        vector<ll> a(n);
        ll sum = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        
        }
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }

        int dx = k - 1;
        int dy = n - k + 1;

        ll px = f_calc(a, dx, dy, n);
        ll res = sum-px;
        cout <<res <<endl;
    }


int main() {
int t;
cin>>t;
while(t--)
{
    solve();
}

    return 0;
}