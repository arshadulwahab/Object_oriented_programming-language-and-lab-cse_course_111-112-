#include <iostream>
using namespace std;

int main() {
    double foot, inches;

   // cout << "Enter foot: ";


        cout << "Enter foot(0 to quit): ";
        cin >> foot;
    if (foot == 0) {
        cout<<"Terminated";
    }else {
        cout << "Foot in inches: " << foot * 12;
    }
}
