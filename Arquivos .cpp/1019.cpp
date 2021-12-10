#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A, H, M;
	
	cin >> A;
	
	M = A / 60;
	A = A % 60;
	
	H = M / 60;
	M = M % 60;
	
	cout << H << ":" << M << ":" << A << endl;
	
		return 0;
}