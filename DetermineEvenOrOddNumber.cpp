/*
 * This is a C-like comment.
 * 
 * THIS PROGRAM DETERMINES WHETHER AN INTEGERIS // ODD OR EVEN.
 */
#include <iostream>
using namespace std;

int main() {
        int num;

    // cout << "Enter foot: ";


    cout << "Enter two numbers";
    cin >> num;
    if (num%2 == 0) {
        cout<<"Number is even";
    }else {
        cout << "Number is odd";
    }
    return 0;
}
