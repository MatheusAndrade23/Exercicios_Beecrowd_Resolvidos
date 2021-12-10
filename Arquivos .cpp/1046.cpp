#include <bits/stdc++.h>

using namespace std;

int main()
{
	pair <int, int> p;
	int hora;
	
	cin >> p.first;
	cin >> p.second;
	
	if(p.first == p.second)
	{
		hora = 24;
		cout << "O JOGO DUROU " << hora << " HORA(S)" << endl;
	}
	else if(p.first == 0 )
	{
		hora = p.second;
		cout << "O JOGO DUROU " << hora << " HORA(S)" << endl;
	}
	else if(p.second == 0)
	{
		hora = 24 - p.first;
		cout << "O JOGO DUROU " << hora << " HORA(S)" << endl;
	}
	
	else if(p.first > p.second)
	{
		hora = (p.second + 24) - p.first;
		cout << "O JOGO DUROU " << hora << " HORA(S)" << endl;
	}
	
	else if (p.second > p.first)
	{
		hora = p.second - p.first;
		cout << "O JOGO DUROU " << hora << " HORA(S)" << endl;
	}
	return 0;
}