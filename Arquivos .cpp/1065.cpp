#include <bits/stdc++.h>

using namespace std;

int main()
{
	int S = 0;
	int N = 0;
	
	for(int i = 0; i < 5; i++)
	{
	cin >> S;
	
	if(S % 2 == 0)
	{
		N ++;
	}
	}
	
	cout << N << " valores pares" << endl;
	
	
	return 0;
}