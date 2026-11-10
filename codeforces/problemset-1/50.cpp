#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
void solve() {
ll x,y,k;
cin>>x>>y>>k;
cout<<(max({2*((x+k-1)/k)-1,2*((y+k-1)/k)}))<<endl;

}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}