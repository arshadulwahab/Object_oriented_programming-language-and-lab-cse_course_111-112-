#include <iostream>
using namespace std;

#define SIZE 10

class stack {
private:
    char stck[SIZE];
    int tos;

public:
    stack(){ tos = 0;}

    void push(char ch){
        if (tos == SIZE) {
        cout << "Stack is full" << endl;
        return;
    }
        stck[tos] = ch;
        tos++;
}

    char pop() {
        if (tos == 0) {
            cout << "Stack is empty" << endl;
            return 0;
        }
        tos--;
        return stck[tos];
    }
};


int main() {
    stack s1, s2;
    int i;

    s1.push('m');
    s2.push('p');
    s1.push('n');
    s2.push('q');
    s1.push('l');
    s2.push('r');

    for (i = 0; i < 3; i++) { cout << "Pop s1:" << s1.pop() << endl; }
    for (i = 0; i < 3; i++) { cout << "Pop s2:" << s2.pop() << endl; }
    return 0;
}
