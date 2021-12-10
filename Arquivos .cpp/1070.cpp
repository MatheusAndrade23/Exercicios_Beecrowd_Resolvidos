#include <bits/stdc++.h>

using namespace std;

int main()
{
    int X;
    cin >> X;
    
    if(X % 2 == 1)
    {
        cout << X << endl;
        cout << (X + 2) << endl;
        cout << (X + 4) << endl;
        cout << (X + 6) << endl;
        cout << (X + 8) << endl;
        cout << (X + 10) << endl;
    }
    else
    {
        cout << (X + 1) << endl;
        cout << (X + 3) << endl;
        cout << (X + 5) << endl;
        cout << (X + 7) << endl;
        cout << (X + 9) << endl;
        cout << (X + 11) << endl;
    }
    return 0;
}