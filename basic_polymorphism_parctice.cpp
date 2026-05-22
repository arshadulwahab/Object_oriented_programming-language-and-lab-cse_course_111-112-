#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    void display(){
        cout<<"I am a student"<<endl;
    }

    void display(string name){
        cout<<"My name is "<<name<<endl;
    }

    void display(string name, int age){
        cout<<"My name is "<<name<<" and I am "<<age<<" years old."<<endl;
    } 
};

int main(){
    Student s1;
    s1.display();
    s1.display("John", 20);
    s1.display("Alice");
    return 0;
}