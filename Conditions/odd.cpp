#include <iostream>
using namespace std;

int main()
{
    /*Sum of all odd numbers from 1 to n*/
    // int n = 10;
    // int oddSum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         oddSum += i;
    //     }

    // }
    // cout <<"odd sum is :" << oddSum << endl;

    //  /*Sum of all even numbers from 1 to n*/
    // int n = 5;
    // int evenSum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         evenSum += i;
    //     }

    // }
    // cout <<"even sum is : " << evenSum << endl;

    /*Sum of all even numbers from 1 to n using while loop*/
    // int n = 10;
    // int evenSum = 0;
    // int i = 1;

    // while (i <= n)
    // {
    //     if (i % 2 == 0)
    //     {
    //         evenSum += i;
    //     }
    //     i++;

    // }
    // cout <<"even sum is : " << evenSum << endl;

    /*Sum of all odd numbers from 1 to n using while loop*/
    // int n = 10;
    // int oddSum = 0;
    // int i = 1;
    // while (i <= n)
    // {
    //     if (i % 2 != 0)
    //     {
    //         oddSum += i;
    //     }
    //     i++;
    // }
    // cout << "odd sum is : " << oddSum << endl;

    /* sum of all numbers from 1 to n which are divisible by 3*/
    // int n = 15;
    // int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 3 == 0)
    //     {
    //         sum += i;
    //     }
    // }
    // cout << "Sum of numbers divisible by 3: " << sum << endl;

    /*print factorial number of n*/
    int n = 6;
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    cout << "factorial of " << n << " is : " << factorial << endl;

    return 0;
}