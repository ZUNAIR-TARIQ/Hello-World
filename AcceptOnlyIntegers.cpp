
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter number: ";

    //Loop's body will execute if the input is not an Int :)
    while (!(cin >> number)) {
        cout << "Error, not an int!" << endl;
        cin.clear();
        cin.ignore(100, '\n');
    }

    cout << "Great. You entered a number.";

    system("pause>0");
}
