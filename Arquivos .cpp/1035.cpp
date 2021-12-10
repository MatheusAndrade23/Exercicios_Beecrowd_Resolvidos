#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A, B, C, D;
	
	cin >> A;
	cin >> B;
	cin >> C;
	cin >> D;
	
	if( (B > C && D > A )&& ((A + B) < (C + D)) && (A%2 == 0))
	{
		cout << "Valores aceitos" << endl;
	}
	else
	{
		cout << "Valores nao aceitos" << endl;
	}
	
		return 0;
}