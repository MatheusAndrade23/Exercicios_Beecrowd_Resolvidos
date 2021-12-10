#include <bits/stdc++.h>

using namespace std;

int main()
{
    float A, B, C, R;
    
    cin >> A;
    cin >> B;
    cin >> C;
    
    if ( A < B + C && B < A + C && C < B + A)
    {
    	R = (A + B + C) * 1.0;
    	cout << fixed << setprecision (1);
    	cout << "Perimetro = " << R << endl;
	}
    else
    {
    	R = ((A + B) / 2.0) * C;
    	cout << fixed << setprecision (1);
    	cout << "Area = " << R << endl;
	}
 return 0;
}