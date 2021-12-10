#include <bits/stdc++.h>

using namespace std;

int main()
{
	int X, A , M;
	
	cin >> X;
	
	A = X / 365;
	X = X % 365;
	
	M = X / 30;
	X = X % 30;
	
	cout << A << " ano(s)" << endl;
	cout << M << " mes(es)" << endl;
	cout << X << " dia(s)" << endl;
		return 0;
}