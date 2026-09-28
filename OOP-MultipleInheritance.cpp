#include<iostream>
using namespace std;

class Person {
protected:
    int id;
    string name;

public:

    Person(){
        id=0;
        name="";
    }

    Person(int id,string name){
     this->id=id;
     this->name=name;
    }

    int getid(){
    return this->id;
    }

    string getName(){
    return this->name;
    }

    void setid(int id){
    this->id=id;
    }
    void setname(string name){
    this->name=name;
    }

};

class Student : public Person
{
protected:
    double marks;
public:
    Student(){
    marks=0;
    }
    Student(int id,string name,double marks):Person(id,name){
    this->marks=marks;
    }

    int getmarks(){
    return this->marks;
    }

    void setMarks(double marks){
        this->marks=marks;
    }


};

class Teacher : public Person
{
protected:
    string subject;
public:
    Teacher(){
    subject="";
    }
    Teacher(int id,string name,string subject):Person(id,name){
    this->subject=subject;
    }

    string getsubject(){
    return this-> subject;
    }

    void setsubject(double subject){
   this->subject=subject;
    }


};

class teachingStudent:public Student,public Teacher{
public:
    teachingStudent(int id,string name,double marks, string subject):Teacher(id,name,subject),Student(id,name,marks){
    }

    void showdetail(){
    cout<<"---------------Student--------------"<<endl;
    cout<<"Name:"<<endl;
    cout<<"Id:"<<endl;
    cout<<"Marks:"<<endl<<endl;
    }



};

int main(){
   Teacher T1(2033,"Rofikul Islam","H.M");
   Student s1(4050,"Arshadul",100);

   teachingStudent  ts1(1023,"rakib",26,"h.m");
   ts1.showdetail();

}

