#include <bits/stdc++.h>

using namespace std;

int main()
{
	double A, B, C = 0;
	double D, X1, X2;
	
	cin >> A;
	cin >> B;
	cin >> C;
	
	D = (pow(B,2) - (4*A*C));
	
	if (A == 0)
	{
		cout << "Impossivel calcular" << endl;
	}
	 else if(D > 0)
	{
		X1 = ((-1*B) + sqrt(D)) / (2*A);
		X2 = ((-1*B) - sqrt(D)) / (2*A);
		
		cout << fixed << setprecision (5);
		cout << "R1 = " << X1 << endl;
		cout << "R2 = " << X2 << endl;
	}
	else if(D == 0)
	{
		X1 = (-1*B) / 2*A;
		X2 = (-1*B) / 2*A;
		
		cout << fixed << setprecision (5);
		cout << "R1 = " << X1 << endl;
		cout << "R2 = " << X2 << endl;
	}
	else
	{
		cout << "Impossivel calcular" << endl;
	}
	return 0;
}