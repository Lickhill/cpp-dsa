#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "give the number of letters in a word" << endl;
    cin >> n;
    char arr[n + 1];
    cout << "give the word" << endl;
    cin >> arr;
    int i = 0;
    int count = 1;
    while (i < n)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            count = 0;
            break;
        }
        else
            i++;
    }

    if (count == 0)
        cout << "word not palindrome" << endl;
    else
        cout << "word is palindrome" << endl;

    return 0;
}