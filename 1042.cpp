#include <bits/stdc++.h>

using namespace std;

int v[3];
int v2[3];

int main()
{
    int S;

	for(int i = 0; i < 3; i++)
	{
		cin >> S;
		v2[i] = S;
		v[i] = S;
	}
	
	sort(v,v+3);
	
	for(int i = 0; i < 3; i++)
	{
		cout << v[i] << endl;
	}

	cout << endl;
	
	for(int i = 0; i < 3; i++)
	{
		cout << v2[i] << endl;
	}

 return 0;
}