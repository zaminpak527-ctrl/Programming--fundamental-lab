#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    int num1 = rand() % 900 + 100;
    int num2 = rand() % 900 + 100;

    cout << "Math Tutor" << endl;
    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "---------" << endl;

    cout << "Press Enter to check the answer...";
    cin.get();

    int answer = num1 + num2;

    cout << "\nCorrect Answer:" << endl;
    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "---------" << endl;
    cout << "  " << answer << endl;

    return 0;
}