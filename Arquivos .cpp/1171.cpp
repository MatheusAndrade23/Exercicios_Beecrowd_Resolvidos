#include <bits/stdc++.h>

using namespace std;

int main()
{
	int v[2003];
	
	for(int i = 0; i < 2003; i++)
	{
		v[i] = 0;
	}
	
	int N, S;
	
	cin >> N;
	
	for(int i = 0; i < N; i++)
	{
		cin >> S;
		v[S] = v[S] + 1;
	}
	
	for(int i = 0; i < 2003; i++)
	{
		if(v[i] > 0)
		{
			cout << i << " aparece " << v[i] << " vez(es)" << endl;
		}
	}
	
	return 0;
}