#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

 void f_calc(int n, int& dx) {
        while ((1 << dx) <= n) {
            dx++;
        }
    }

    void g_calc(vector<int>& b, int dy) {
        b.resize(dy);
        b[0] = 0;

        for (int i = 1; i < dy; ++i) {
            b[i] = i ^ (i >> 1);
        }
    }

    void p_calc(vector<int>& a, vector<int>& b, int dy) {
        for (int i = 1; i < dy; ++i) {
            a.push_back(b[i - 1] ^ b[i]);
        }
    }
void solve()
{
   int n;
        cin >> n;

        int dx = 0;
        f_calc(n, dx);

        int dy = 1 << dx;

        vector<int> b;
        g_calc(b, dy);

        vector<int> a;
        a.reserve(2 * dy - 1);

        p_calc(a, b, dy);

        a.push_back(b[dy - 1]);

        p_calc(a, b, dy);
        int res = a.size();
        cout << res << endl;

        for (int i = 0; i < (int)res; ++i) {
            if (i) cout <<" ";
            cout << a[i];
        }

        cout << endl; 
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