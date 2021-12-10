#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int a, b;
	long long int x, y;
	
	while(cin >> a >> b)
	{
		y = 1;
		x = 1;
		
		for(int i = a; i > 0; i--)
		{
			x = a * x;
			a--;
		}
		
		for(int i = b; i > 0; i--)
		{
			y = b * y;
			b--;
		}
		
		cout << (y + x) << endl;
	}
	return 0;
}