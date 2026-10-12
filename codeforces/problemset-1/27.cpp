#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
   ll n;
   cin>>n;
   vector<ll>a(n),b(n);
   for(int i=0;i<n;i++)cin>>a[i];
   for(int i=0;i<n;i++)cin>>b[i];

		int dx = -1, dy = -1;
		for(int j = 0; j < n; j++)
		{
			if(a[j] != b[j])
			{
				dy = j;
				if(dx == -1)
					dx = j;
			}
		}
		while(dx > 0 && b[dx - 1] <= b[dx])
			dx--;
		while(dy < n - 1 && b[dy + 1] >= b[dy])
			dy++;
		cout<<dx+1<<" "<<dy+1<<endl;
   
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