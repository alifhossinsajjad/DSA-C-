#include <iostream>
using namespace std;

int main()
{

    /*Star and number print */
    // int n = 4;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    /* Print n numbers of characters */

    int n = 5;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch ++;
        }
        cout << endl;
    }

    return 0;
}