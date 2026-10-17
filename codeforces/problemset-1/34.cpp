#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void g_calc(string str, vector<int>& s, int n, int& dx) {
    for (int i = 1; i < n; ++i) {
        if (str[i] == str[i - 1]) {
            ++dx;
        } else {
            s.push_back(dx);
            dx = 1;
        }
    }
}

void f_calc(vector<int>& s, int dy, int& fx) {
    if (dy >= 3) {
        bool flag = false;
        for (int i = 1; i <= dy - 2; ++i) {
            if (s[i] == 1) {
                flag = true;
                break;
            }
        }
        if (flag) ++fx;
    }
}

void solve() {
    
        string str;
        cin >> str;
        int n = (int)str.size();

        vector<int> s;
        int dx = 1;

        g_calc(str, s, n, dx);
        s.push_back(dx);

        int dy = (int)s.size(), fx = 1;

        bool flg = false;
        for (auto it : s) {
            if (it >= 3) {
                flg = true;
                break;
            }
        }
        if (flg) fx++;

        f_calc(s, dy, fx);

        cout << fx <<endl;

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