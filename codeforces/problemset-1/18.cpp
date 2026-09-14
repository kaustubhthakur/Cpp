#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
 int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        if (a[1] != n) {
            cout << "NO" << '\n';
            return;
        }
        vector<int> b;
        for (int i = n; i >= 1; i--) {
            while (b.size() < a[i]) {
                b.push_back(i);
            }
        }
        bool flg = true;
        for (int i = 1; i <= n; i++) {
            if (a[i] != b[i - 1]) {
                cout << "NO" << '\n';
                flg = false;
                break;
            }
        }
        if (flg) {
            cout << "YES" << '\n';
        }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}