#include <bits/stdc++.h>

using namespace std;

int main()
{
    float A;
    
    cin >> A;
    
    if (((A > 0) || (A == 0)) && ((A < 400.00 || A == 400.00)))
    {
    	cout << fixed << setprecision(2);
    	cout << "Novo salario: " << A * 1.15 << endl;
    	cout << "Reajuste ganho: " << A * 0.15 << endl;
    	cout << "Em percentual: 15 %" << endl;
	}
    else if(A > 400.00 && ((A < 800.00 || A == 800.00)))
    {
    	cout << fixed << setprecision(2);
    	cout << "Novo salario: " << A * 1.12 << endl;
    	cout << "Reajuste ganho: " << A * 0.12 << endl;
    	cout << "Em percentual: 12 %" << endl;
	}
    else if(A > 800.0 && ((A < 1200.00 || A == 1200.00)))
    {
    	cout << fixed << setprecision(2);
    	cout << "Novo salario: " << A * 1.10 << endl;
    	cout << "Reajuste ganho: " << A * 0.10 << endl;
    	cout << "Em percentual: 10 %" << endl;
	}
    else if(A > 1200.00 && ((A < 2000.00 || A == 2000.00)))
    {
    	cout << fixed << setprecision(2);
    	cout << "Novo salario: " << A * 1.07 << endl;
    	cout << "Reajuste ganho: " << A * 0.07 << endl;
    	cout << "Em percentual: 7 %" << endl;
	}
    else if(A > 2000.00)
    {
    	cout << fixed << setprecision(2);
    	cout << "Novo salario: " << A * 1.04 << endl;
    	cout << "Reajuste ganho: " << A * 0.04 << endl;
    	cout << "Em percentual: 4 %" << endl;
	}
    
 return 0;
}