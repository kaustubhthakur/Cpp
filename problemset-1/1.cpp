#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<pair<ll, ll>>pr(n);
		for (long long i = 0; i < n; i++) 
		{
			long long x;
			cin >> x;
			pr[i] = {x, i + 1};
		}

	
		for (long long i = 0; i < n; i++)
		{
			
		pr[i].first = pr[i].first % k;
			
			if (pr[i].first == 0)
				pr[i].first = k;
		}

		
		sort(pr.begin(), pr.end(), [&](pair<long long, long long> a, pair<long long, long long> b) {
			if (a.first != b.first)
				return a.first > b.first;
			return a.second < b.second;
		});

	
		for (auto it : pr)
			cout << it.second << " ";
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