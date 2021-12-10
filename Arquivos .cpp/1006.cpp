#include <bits/stdc++.h>

using namespace std;

int main()

{
	double A, B, C = 0;
	float M = 0;
	
	cin >> A >> B >> C;
	
	M = (((A*2) + (B*3) + (C*5)) /10);
	
	cout << fixed << setprecision(1);
	cout << "MEDIA = " << M << endl;

	return 0;
}