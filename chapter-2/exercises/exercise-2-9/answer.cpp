#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
    cout << "please type in a number: ";

    int firstInput;
    cin >> firstInput;

    cout << "please type in a second number: ";

    int secondInput;
    cin >> secondInput;

    cout << (firstInput > secondInput ? firstInput : secondInput) << " is the larger number." << endl;
    return 0;
}
