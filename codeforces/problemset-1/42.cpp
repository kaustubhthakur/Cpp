#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    	long long n;
		cin >> n; 
		char ch;
		cin >> ch; 
		string str;
		cin >> str;
		str += str;

		
		n *= 2;

		
		long long dx = -1,dy = INT_MIN;

		
		for (int i = n - 1; i >= 0; i--)
		{
			
			if (str[i] == 'g')
				dx = i;

		
			if (str[i] == ch)
			{
				long long d = dx - i;
			
				dy = max(dy, d);
			}
		}
	
		cout << dy << endl;
}
int main()
{
	long long t;
	cin >> t; 
	while (t--)
	{
	solve();
	}
	return 0;
}


