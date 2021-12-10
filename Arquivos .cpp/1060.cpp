#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	float N, S = 0;
	vector<int> v;
	
	while(cin >> S)
	{
		v.push_back(S);
	}
	
	for(int i = 0; i < v.size(); i++)
	{
		if(v[i] > 0)
			N ++;
	}
	cout << N << " valores positivos" << endl;
	
	return 0;
}