#include <iostream>

using namespace std;

int main()
{

    int n = 5;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // nums
        //chars
        for (int j = 0; j < n - i; j++)
        {
            // cout << (i + 1);
            cout << char (ch + i);
        }
        cout << endl;
    }
    return 0;
}