#include <iostream>
using namespace std;
int main()
{
    string sen;
    cout << "Sentence: ";
    getline(cin, sen);
    sen = sen + '\0';

    int max = 0, count = 0;
    for (int i = 0; i < sen.length(); i++)
    {
        if (sen[i] != ' ' && sen[i] != '\0')
        {
            count++;
        }
        else
        {
            if (max < count)
            {
                max = count;
            }
            count = 0;
        }
    }
    cout << "\n\nsentence: " << sen;
    cout << "\nsenlen: " << sen.length();
    cout << "\nMax: " << max;
    return 0;
}