#include <iostream>
using namespace std;

int main()
{
    // sum of two numbers
    //  int a, b;
    //  cout << "Enter A : ";
    //  cin >> a;
    //  cout << "Enter B : ";
    //  cin >> b;
    //  int sum = a + b;
    //  cout << "Sum is : " << sum << endl;

    // difference of two numbers
    //  int a, b;
    //     cout << "Enter A : ";
    //     cin >> a;
    //     cout << "Enter B : ";
    //     cin >> b;
    //     int difference = a - b;
    //     cout << "Difference is : " << difference << endl;

    // product of two numbers
    //  int a, b;
    //  cout << "Enter A : ";
    //  cin >> a;
    //  cout << "Enter B : ";
    //  cin >> b;
    //  int product = a * b;
    //  cout << "Product is : " << product << endl;

    // division of two numbers
    //  int a, b;
    //  cout << "Enter A : ";
    //  cin >> a;
    //  cout << "Enter B : ";
    //  cin >> b;
    //  if (b != 0) {
    //      int division = a / b;
    //      cout << "Division is : " << division << endl;
    //  } else {
    //      cout << "Error: Division by zero is not allowed." << endl;
    //  }

    // modulus of two numbers
    int a, b;
    cout << "Enter A : ";
    cin >> a;
    cout << "Enter B : ";
    cin >> b;
    if (b != 0)
    {
        int modulus = a % b;
        cout << "Modulus is : " << modulus << endl;
    }
    else
    {
        cout << "Error: Modulus by zero is not allowed." << endl;
    }

    return 0;
}