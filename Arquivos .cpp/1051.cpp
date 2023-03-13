#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

    double salary;
    cin >> salary;

    cout << fixed << setprecision(2);

    if(salary <= 2000.00)
        cout << "Isento" << endl;

    else if (salary >= 2000.01 && salary <= 3000.00)
        cout << "R$ " << (salary - 2000.00)*0.08 << endl;

    else if (salary >= 3000.01 && salary <= 4500.00)
        cout << "R$ " << ((salary - 3000.00)*0.18 + 1000.00*0.08) << endl;

    else
        cout << "R$ " << (salary - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08 << endl;
  
    return 0;

}
