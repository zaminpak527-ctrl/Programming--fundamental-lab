#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double item1 = 12.95;
    double item2 = 24.95;
    double item3 = 6.95;
    double item4 = 14.95;
    double item5 = 3.95;

    double subtotal;
    double salesTax;
    double total;

    subtotal = item1 + item2 + item3 + item4 + item5;
    salesTax = subtotal * 0.06;
    total = subtotal + salesTax;

    cout << fixed << setprecision(2);

    cout << "Item 1 Price: $" << item1 << endl;
    cout << "Item 2 Price: $" << item2 << endl;
    cout << "Item 3 Price: $" << item3 << endl;
    cout << "Item 4 Price: $" << item4 << endl;
    cout << "Item 5 Price: $" << item5 << endl;

    cout << "Subtotal: $" << subtotal << endl;
    cout << "Sales Tax: $" << salesTax << endl;
    cout << "Total: $" << total << endl;

    return 0;
}