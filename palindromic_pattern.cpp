#include <iostream>
using namespace std;
int main()
{

	int i, j, k, p;
	int n;
	cin >> n;
	int count = 0;
	int m;
	for (j = 1; j <= n; j++)
	{
		for (i = 1; i <= n - j; i++)
		{
			cout << "  ";
		}

		for (k = j; k >= 1; k--)
		{
			cout << k << " ";
		}
		for (p = 2; p <= j; p++)
		{
			cout << p << " ";
		}
		cout << endl;
	}

	return 0;
}
