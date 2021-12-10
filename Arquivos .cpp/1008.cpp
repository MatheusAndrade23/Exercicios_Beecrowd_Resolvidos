#include <bits/stdc++.h>

using namespace std;

int main()

{
	int A, B = 0;
    float M, R = 0;
    
	cin >> A >> B >> M;
	
	R = B * M;
	
	cout << fixed << setprecision(2);
	cout << "NUMBER = " << A << endl;
	cout << "SALARY = U$ " << R << endl;

	return 0;
}