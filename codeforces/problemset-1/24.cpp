#include <bits/stdc++.h>

using namespace std;
void solve()
{
       string str;
    cin >> str;
    char x = '0';
    for (auto& it : str) {
      if (it == '?') it = x;
      x = it;
    }
    cout << str << '\n';
}
int main() {

  int t;
  cin >> t;
  while (t--) {
 solve();
  }
}