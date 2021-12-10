#include <bits/stdc++.h>

using namespace std;

int main()
{
	int S , C , R = 0;
	
	cin >> S;
	cin >> C;
	
	if ( S > C || S == C)
	{
	for(int i = C + 1; i < S; i++)
	{
		if(i % 2 == 1 || i % 2 == -1)
		{
			R = R + i;
		}
	}
	}
	else
	{
		for(int i = S + 1; i < C; i++)
	{
		if(i % 2 == 1 || i % 2 == -1)
		{
			R = R + i;
		}
	}
	}
	cout << R << endl;

	return 0;
}