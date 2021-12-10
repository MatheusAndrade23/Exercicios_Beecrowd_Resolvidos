#include <bits/stdc++.h>

using namespace std;

int main()
{
 	set<string> st;
    string s;
    
    while(cin >> s)
	{
		st.insert(s);
	}
    
    cout << st.size() << endl;
    
	return 0;
}