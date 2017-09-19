#include <iostream>

#pragma warning( disable : 4996 )
using namespace std;

int main()
{
	freopen("Input.txt", "rt", stdin);
	freopen("Output.txt", "w+t", stdout);
	int table[320];
	for (int i = 0; i < 320; i++)
		table[i] = i*i;
	int a, b;
	while (cin >> a >> b)
	{
		if (!a)
			break;
		int min, max;
		for (int i = 0; i < 320; i++)
			if (table[i] > a)
			{
				min = i - 1;
				break;
			}
			else if (table[i] == a)
			{
				min = i - 1;
				break;
			}
		for (int i = 0; i < 320; i++) 
			if (table[i] > b)
			{
				max = i - 1;
				break;
			}
			else if (table[i] == b)
			{
				max = i;
				break;
			}
		cout << max - min << endl;
	}
	return 0;
}