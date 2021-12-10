#include<bits/stdc++.h>

using namespace std;

int main()
{
 
    vector <int> v;
    vector <int> v2;
    vector <int> v3;
	
	int A = 0;
	int S = 0;
	int M = 0;
	int N = 0;
	
	cin >> N;
    
    for(int i = 0; i < N; i++)
	{
		cin >> M;
		
		for(int i = 0; i < M; i++)
		{
			cin >> S ;
			v.push_back(S);
			
		}
		
		v2 = v;
		
		sort(v.begin(),v.end());
		
		reverse(v.begin(),v.end());
		
		for(int i = 0; i < M; i++)
		{
			if (v2[i] == v[i])
			{
				A = A + 1;
			}
		}
		
		v3.push_back(A);
		
		A = 0;
		v.clear();
		v2.clear();
	} 
	 for(int i = 0; i < v3.size(); i++)
	 {
	 	cout << v3[i] << endl;
	 }
	
	return 0;
}