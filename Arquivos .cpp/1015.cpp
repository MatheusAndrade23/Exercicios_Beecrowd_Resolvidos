#include <bits/stdc++.h>

using namespace std;

int main()
{
	float x1, y1, x2, y2, D;
	
	cin >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;
	
	D =  sqrt(((x2-x1)*(x2-x1)) + ((y2 - y1)*(y2-y1)));
	
	cout << fixed << setprecision(4);
	cout << D << endl;
	
	return 0;
}