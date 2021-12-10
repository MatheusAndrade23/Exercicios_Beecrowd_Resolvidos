#include <bits/stdc++.h>

using namespace std;

int main()

{
   double A, B, C;

    cout << fixed << setprecision(1);
    cin >> A >> B >> C;
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << A*C/2 << endl;
    cout << "CIRCULO: " << 3.14159*C*C << endl;
    cout << "TRAPEZIO: " << (C*(A+B))/2 << endl;
    cout << "QUADRADO: " << B*B << endl;
    cout << "RETANGULO: " << A*B << endl;

    
	return 0;
}