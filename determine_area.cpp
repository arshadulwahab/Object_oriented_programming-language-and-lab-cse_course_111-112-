#include <iostream>

using namespace std;

class area_c1 {
    public:
      double height,width;

};
class rectangle : public area_c1 {
    public:
      rectangle(double h, double w) {
          height = h;
          width = w;
      }
    double area() {
          return width * height;
      }
};

class isosceles : public area_c1 {
    public:
     isosceles(double h, double w) {
         height = h;
         width = w;
     }
    double area() {
         return width * height *.5;
     }
};
int main() {
    rectangle rect(10.0,5.0);
    isosceles isos(10.0,5.0);

    cout<<"---------------------------------------------"<<endl;
    cout<<"Rectangle: "<<endl;
    cout<<"Height: "<<rect.height<<endl;
    cout<<"Width: "<<rect.width<<endl;
    cout<<"Area: "<<rect.area()<<endl;

    cout<<"--------------------------------------------"<<endl;
    cout<<"isosceles: "<<endl;
    cout<<"Height: "<<isos.height<<endl;
    cout<<"Width: "<<isos.width<<endl;
    cout<<"Area: "<<isos.area()<<endl;

    return 0;

 }
