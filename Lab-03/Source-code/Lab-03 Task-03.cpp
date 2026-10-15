#include <iostream>
using namespace std;

int main()
{
    int units = 3;
    float mass = 4.5;
    double weight;

    weight = mass * units;

    cout << "Mass = " << mass << endl;
    cout << "Units = " << units << endl;
    cout << "Weight = " << weight << endl;

    return 0;
}