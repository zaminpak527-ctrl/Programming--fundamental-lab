#include <iostream>
using namespace std;

int main()
{
    char alphabet;

    cout << "Enter a lowercase alphabet: ";
    cin >> alphabet;

    alphabet = alphabet - 32;

    cout << "Uppercase alphabet: " << alphabet << endl;

    return 0;
}