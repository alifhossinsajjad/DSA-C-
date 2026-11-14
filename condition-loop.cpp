#include <iostream>
using namespace std;

int main()
{
    // Checking the voting eligibility of a person
    // int age;
    // cout << "Enter Your Age :";
    // cin >> age;

    // if (age >= 18)
    // {
    //     cout << "Your are eligible for voting\n";
    // }
    // else
    // {
    //     cout << "Your are not eligible for voting\n";
    // }



// Check marks of a student and determine the grade

int marks;
cout <<"Enter Your marks :";
cin >> marks;

if (marks >= 90)
{
    cout << "Your Grade is A\n";
}
else if (marks >= 80)
{
    cout << "Your Grade is B\n";
}
else if (marks >= 70)
{
    cout << "Your Grade is C\n";
}
else if (marks >= 60)
{
    cout << "Your Grade is D\n";
}
else
{
    cout << "Your Grade is F\n";
}


    return 0;
}