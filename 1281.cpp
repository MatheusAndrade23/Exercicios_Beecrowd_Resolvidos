#include <bits/stdc++.h>

using namespace std;

int main()
{	
	int c, q, q2 = 0;
	float r = 0;
	map <string , float> mp;
	map <string , float> mp2;
	vector <float> v;
	pair <string,float> p;
	
	cin >> c;
	
	for(int i = 0; i < c; i++)
	{
		cin >> q;
		
		for(int i = 0; i < q; i++)
		{
			cin >> p.first >> p.second;
			
			mp[p.first] = p.second;
		}
		
		cin >> q2;
		
		for(int i = 0; i < q2; i++)
		{
			cin >> p.first >> p.second;
			
			mp2[p.first] = p.second;
			
			r = r + mp[p.first] * mp2[p.first];
		}
		
		mp.clear();
		mp2.clear();
		v.push_back(r);
		
		r = 0;
	}
	
	for(int i = 0; i < v.size(); i++)
	{
		cout << "R$ " << fixed << setprecision(2) << v[i] << endl;
	}
	
	
	return 0;
}