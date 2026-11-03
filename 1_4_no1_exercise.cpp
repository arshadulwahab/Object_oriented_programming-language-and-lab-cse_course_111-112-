/* way to do a comment */
#include <iostream>
using namespace std;

int main() {
    double foot, inches;

    // way to do a single line comment


    cout << "Enter foot(0 to quit): ";
    cin >> foot;
    if (foot == 0) {
        cout << "Terminated";
    } else {
        cout << "Foot in inches: " << foot * 12;
    }
}
