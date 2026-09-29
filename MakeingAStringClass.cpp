#include <iostream>
#include<cstring>
#include<cstdlib>
using namespace std;



class strtype {
    char *p;
    int len;

public:
    strtype(char *ptr) {
        p = (char *) malloc(len+1);
        if (!p) {
            cout << "Allocation error" << endl;
            exit(1);
        }
        strcpy(p,ptr);
    }

    ~strtype(){
        cout << "Freeing p\n";
        free(p);
    }

    void set(char *ptr);

    void show() {
        cout << p << " length: " << len << endl;
    }
};

/*

void strtype::show() {
    cout << p << "length: " << len << endl;
}
*/
int main() {
    strtype s1("This is a test"), s2("I like C++");


    s1.show();
    s2.show();
    return 0;
}
