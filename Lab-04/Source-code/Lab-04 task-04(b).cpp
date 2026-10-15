#include <iostream>
using namespace std;

int main()
{
    int number;
    int temp;
    int digits = 0;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0)
    {
        temp = number;

        while (temp > 0)
        {
            digits++;
            temp = temp / 10;
        }

        cout << "Number is positive." << endl;
        cout << "Number of digits = " << digits << endl;
    }
    else
    {
        cout << "Number is not positive." << endl;
    }

    return 0;
}