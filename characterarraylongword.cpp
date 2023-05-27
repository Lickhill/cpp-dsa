#include <iostream>
using namespace std;

int main()
{
    cout << "give n" << endl;
    int n;
    cin >> n;
    cin.ignore();
    char arr[n + 1];

    cout << "give sentence" << endl;
    cin.getline(arr, n); // to input a sentence in character array
    cin.ignore();        // to clear the buffer

    int i = 0;
    int max = 0, count = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (max < count)
            {
                max = count;
            }
            count = 0;
        }
        else
        {

            count++;
        }

        if (arr[i] == '\0')
            break;

        i++;
    }

    cout << endl
         << max << endl;
    return 0;
}