/*#include <iostream>
using namespace std;

int main() {
    int hours, wage;
    cout << "Enter hours: ";
    cin >> hours;
    cout << "Enter wage/hour: ";
    cin >> wage;

    cout << "Your gross pay: " << hours * wage << "$";
    return 0;
}*/
#include <iostream>
using namespace std;
#define SIZE 100
class q_type
{
int queue [ SIZE ]; // holds the queue
int head , tail ; // indices of head and tail
public :
void init (); // initialize
void q(int num ); // store
int deq (); // retrieve
};
// Initialize
void q_type :: init ()
{
head = tail = 0;
}
// Put value on the queue .
void q_type ::q(int num )
{
if( tail +1== head || ( tail +1== SIZE && ! head ))
{
cout << " Queue is full \n";
return ;
}
tail ++;
if( tail == SIZE )
tail = 0; // cycle around
queue [ tail ] = num;
}
