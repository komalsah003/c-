#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		ll n, k;
		cin >> n >> k;
		ll a[n];
		ll c = 0;
		ll sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			sum += a[i];
			if (a[i] > 0)
				c++;
		}
		ll sum1 = 0;
		if (c == n)
			cout << sum << "\n";
		else if (k == 0 && c != n)
			cout << "0\n";
		else
		{
			sort(a, a + n);
			for (int i = 0; i < k; i++)
			{
				if (a[i] < 0)
					a[i] = a[i] * (-1);
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] > 0)
					sum1 += a[i];
			}
			cout << sum1 << "\n";
		}
	}
	return 0;
}