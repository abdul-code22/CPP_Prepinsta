#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	char co[3][n];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> co[i][j];
	}
	for (int i = 0; i < n - 2; i++)
	{
		if (co[0][i] == '#')
		{
			cout << "#";
			continue;
		}
		if (co[0][i] == '.' && co[0][i + 1] == '*' && co[0][i + 2] == '.')
		{
			if (co[1][i] == '*' && co[1][i + 1] == '*' && co[1][i + 2] == '*')
				if (co[2][i] == '*' and co[2][i + 1] == '.' and co[2][i + 2] == '*')
					cout << "A";
			i += 2;
			continue;
		}
		if (co[0][i] == '*' and co[0][i + 1] == '*' and co[0][i + 2] == '*')
		{
			if (co[1][i] == '*' and co[1][i + 1] == '*' and co[1][i + 2] == '*')
			{
				if (co[2][i] == '*' and co[2][i + 1] == '*' and co[2][i + 2] == '*')
				{
					cout << "E";
					i += 2;
					continue;
				}
			}
			else if (co[1][i] == '.' and co[1][i + 1] == '*' and co[1][i + 2] == '.')
			{
				if (co[2][i] == '*' and co[2][i + 1] == '*' and co[2][i + 2] == '*')
				{
					cout << "I";
					i += 2;
					continue;
				}
			}
			else if (co[1][i] == '*' and co[1][i + 1] == '.' and co[1][i + 2] == '*')
			{
				if (co[2][i] == '*' and co[2][i + 1] == '*' and co[2][i + 2] == '*')
				{
					cout << "O";
					i += 2;
					continue;
				}
			}
		}
		if (co[0][i] == '*' and co[0][i + 1] == '.' and co[0][i + 2] == '*')
			if (co[1][i] == '*' and co[1][i + 1] == '.' and co[1][i + 2] == '*')
				if (co[2][i] == '*' and co[2][i + 1] == '*' and co[2][i + 2] == '*')
				{
					cout << "U";
					i += 2;
					continue;
				}
	}
}