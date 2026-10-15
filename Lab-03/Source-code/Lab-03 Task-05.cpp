#include <iostream>
using namespace std;

int main()
{
    int qty = 7;
    int salesReps = 2;
    double unitsEach;

    unitsEach = static_cast<double>(qty) / salesReps;

    cout << "Quantity = " << qty << endl;
    cout << "Sales Representatives = " << salesReps << endl;
    cout << "Units Each = " << unitsEach << endl;

    return 0;
}