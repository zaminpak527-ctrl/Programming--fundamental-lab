#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a five-digit number: ";
    cin >> number;

    int digit1 = number / 10000;
    int digit2 = (number / 1000) % 10;
    int digit3 = (number / 100) % 10;
    int digit4 = (number / 10) % 10;
    int digit5 = number % 10;

    cout << digit1 << "   "
         << digit2 << "   "
         << digit3 << "   "
         << digit4 << "   "
         << digit5 << endl;

    return 0;
}