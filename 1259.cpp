#include <bits/stdc++.h>

using namespace std;

int main()
{
	 vector <int> v;
	 vector <int> v2;
	 
	 int s, n = 0;
	 
	 cin >> n;
	 
	 for(int i = 0; i < n; i++)
	 {
	 	cin >> s;
	 	
	 	if(s%2 == 0)
	 	{
	 		v.push_back(s);
		}
		else
		{
			v2.push_back(s);
		}
	 }
	 
	 sort(v.begin(),v.end());
	 sort(v2.begin(),v2.end());
	 reverse(v2.begin(),v2.end());
	 
	 
	 for(int i = 0; i < v.size(); i++)
	 	cout << v[i] << endl;
	 
	 for(int i = 0; i < v2.size(); i++)
	 	cout << v2[i] << endl;
	
	return 0;
}