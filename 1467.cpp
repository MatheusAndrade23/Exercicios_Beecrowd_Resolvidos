#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, c;
	vector <string> v;

	while(cin >> a >> b >> c)
	{
		if(a != b && a !=c)
			v.push_back("A");
			
		else if ( b != c && b != a)
			v.push_back("B");
		
		else if( c != a && c != b)
			v.push_back("C");
		
		else
			v.push_back("*");
	}
	
	for(int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	
	return 0;
}