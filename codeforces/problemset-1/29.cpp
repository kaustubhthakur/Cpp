#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 void f_calc(vector<int>& hsh, int k) {
        ll fx = 0;

        while (hsh[fx] >= (2 * k)) {
            fx++;
        }
        ll dx = 2*k-1;
        cout<<(dx==hsh[fx]?"YES":"NO")<<endl;
     
    }

void solve()
{
      int n, k;
        cin >> n >> k;

        vector<int> hsh(n + 2, 0);
vector<int>a(n);
        for (int i = 0; i < n; i++) {
            
            cin >> a[i];
        }
        for(int i=0;i<n;i++)
        {
                        hsh[a[i]]++;

        }

        f_calc(hsh, k);
   
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