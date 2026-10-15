#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks < 0 || marks > 100)
    {
        cout << "Invalid marks." << endl;
    }
    else if (marks >= 75)
    {
        cout << "Grade A" << endl;
    }
    else if (marks >= 60)
    {
        cout << "Grade B" << endl;
    }
    else if (marks >= 45)
    {
        cout << "Grade C" << endl;
    }
    else
    {
        cout << "Grade D" << endl;
    }

    return 0;
}