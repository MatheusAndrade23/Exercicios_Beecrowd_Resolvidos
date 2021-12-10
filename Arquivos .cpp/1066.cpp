#include <bits/stdc++.h>

using namespace std;

int main()
{
	int S = 0;
	int P = 0, N = 0, P1 = 0, I = 0;
	
	for(int i = 0; i < 5; i++)
	{
	cin >> S;
	
	if(S % 2 == 0 || S == 0)
	{
		P1 ++;
		
		if(S > 0)
		{
			P++;
		}
			
		else if ( S < 0)
		{
			N ++;
		}
	}
	else if(S % 2 != 0 )
	{
		I++;
		
		if(S > 0)
		{
			P++;
		}
			
		else if ( S < 0)
		{
			N ++;
		}
	}
	}
	
	cout << P1 << " valor(es) par(es)" << endl;
	cout << I << " valor(es) impar(es)" << endl;
	cout << P << " valor(es) positivo(s)" << endl;
	cout << N  << " valor(es) negativo(s)" << endl;

	return 0;
}