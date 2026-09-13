#include <bits/stdc++.h>
using namespace std;

typedef long long ll;



void solve() {
  int n;
        cin >> n;
        int zeros = 0, ones = 0;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (x == 0) zeros++;
            else ones++;
        }

        if (zeros <= ones)
            cout << "Bessie" << endl;
        else
            cout << "Elsie" << endl;
}

int main() {
  

    ll t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}