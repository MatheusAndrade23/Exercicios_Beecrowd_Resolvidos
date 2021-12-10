#include <bits/stdc++.h>

using namespace std;

int main()
{
	float X, A;
	
	cin >> X;
	cin >> A;
	
	if(X == 1)
		X = 4.00;
		
	else if(X == 2)
		X = 4.50;
	
	else if(X == 3)
		X = 5.00;
	
	else if(X == 4)
		X = 2.00;
		
	else
		X = 1.50;
		
	cout << fixed << setprecision(2);	
	cout << "Total: R$ " << A * X  << endl;
	
	
	return 0;
}