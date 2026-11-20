#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    char ch = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            // cout << "* ";
            // cout << (i + 1) << " ";
            cout << ch << " "; // Print the number only base on columns and rows
        }

        ch++;
        cout << endl;
    }
    return 0;
}