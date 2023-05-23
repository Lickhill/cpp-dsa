#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Input n: ";
    cin >> n;

    char a[3][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[j][i] = ' ';
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i % 4 == 0)
        {
            a[2][i] = '*';
        }
        else if (i % 4 == 2)
        {
            a[0][i] = '*';
        }
        else
        {
            a[1][i] = '*';
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << (a[i][j]);
        }
        cout << "\n";
    }

    return 0;
}
