#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    // ask for the person's name
    cout << "Please enter your first name: ";

    // read the name
    string name;
    cin >> name;

    // build the message that we intend to write
    string greeting = "Hello, " + name + "!";

    // the number of blanks surrounding the greeting
    // const int pad = 1;
    const int hPad = 3; // horizontal padding
    const int vPad = 0; // vertical padding

    // total number of rows and columns to write

    // const int rows = pad * 2 + 3;
    const int rows = vPad * 2 + 3;

    // const string::size_type cols = greeting.size() + pad * 2 + 2;
    const string::size_type cols = greeting.size() + hPad * 2 + 2;

    // write a blank line to separate the output from the input
    cout << endl;

    // write rows of output
    // invariant we have written r rows so far
    for (int r = 0; r != rows; ++r) {

        string::size_type c = 0;

        // invariant we have written c characters so far in the current row
        while (c != cols) {


            // is it time to write the greeting?
            if (r == vPad + 1 && c == hPad + 1) {
                cout << greeting;
                c += greeting.size();
            } else {

                // are we on the border?
                if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
                ++c;
            }
        }
        cout << endl;
    }
    // we can conclude that the invariant is true here

    return 0;
}
