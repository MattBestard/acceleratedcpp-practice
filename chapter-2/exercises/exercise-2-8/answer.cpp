#include <iostream>

using std::cout;
using std::endl;

int main() {
    int output = 1;
    for (int i = 1; i != 11; ++i) {
        output *= i;
    }
    cout << output << endl;
    return 0;
}
