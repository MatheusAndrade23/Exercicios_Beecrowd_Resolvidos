#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	double N1, N2, M = 0;
	
	cin >> N1 >> N2;
	
	M =(((N1 * 3.5) + (N2 * 7.5)) / 11);
	
	cout << fixed << setprecision(5);
	
	cout<< "MEDIA = " << M << endl;	
	
    return 0;
}