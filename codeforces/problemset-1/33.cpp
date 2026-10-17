#include<bits/stdc++.h>
using namespace std;

const int N = 3e5 + 9;
using ll = long long;

void solve() {
  ll n,m;
  cin>>n>>m;
  ll d = min(n-m,m);
  ll res =0;
  cout<<(n<=m?-1:d)<<endl;
}

int main() {
int t;

  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}