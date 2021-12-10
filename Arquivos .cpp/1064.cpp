#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int N  = 0;
	float R = 0, S = 0;
		
	for(int i = 0; i < 6; i++)
	{
		cin >> S;
		if(S > 0)
		{
			N ++;
			R = R + S;
		}
	}
	R = R / N;

	cout << fixed << setprecision(1);
	cout << N << " valores positivos" << endl;
	cout << R << endl;
	
	return 0;
}