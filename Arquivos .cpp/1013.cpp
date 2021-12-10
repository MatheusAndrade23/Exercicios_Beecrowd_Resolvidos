#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector <int> v;
	int S;
	 
	for(int i = 0; i < 3; i++)
	{
	cin >> S;
	v.push_back(S);
	}
	
	if ((v[0] > v[1]) && (v[0] > v[2]))
	{
		cout << v[0] << " eh o maior" << endl;
	}
   else if ((v[2] > v[1]) && (v[2] > v[0]))
	{
		cout << v[2] << " eh o maior" << endl;
	}
	else if ((v[1] > v[2]) && (v[1] > v[0]))
	{
		cout << v[1] << " eh o maior" << endl;
	}
	return 0;
}