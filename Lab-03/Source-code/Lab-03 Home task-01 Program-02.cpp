#include <iostream>
using namespace std;

int main()
{
    int number1, number2;
    float quotient;

    cout << "Enter two numbers and I will divide "
         << "the first by the second for you." << endl;

    cin >> number1 >> number2;

    if (number2 != 0)
    {
        quotient = static_cast<float>(number1) / number2;

        cout << "Quotient = " << quotient << endl;
    }
    else
    {
        cout << "Cannot divide by zero." << endl;
    }

    return 0;
}