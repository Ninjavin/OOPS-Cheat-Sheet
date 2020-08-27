#include<bits/stdc++.h>
using namespace std;

class Shape{
    public:
        virtual double Area() = 0;
};

class Circle : public Shape{
    protected:
        double width;

    public:
        Circle(double w){
            width = w;
        }
        
        double Area() override{
            return 3.14159 * pow((width/2), 2);
        }
};

class Rectangle : public Shape{
    protected:
        double height, width;
    public:
        Rectangle(double h, double w){
            height = h;
            width = w;
        }

        double Area() override final{
            return height*width;
        }
};


// Returns Error
// Trying to override a final function

//class Square : public Rectangle{
//    public:
//        Square(double h, double w) : Rectangle(h, w){
//
//        }
//        
//        double Area() override{
//            return height * width;
//        }
//};

void showArea(Shape& shape){
    cout<<"Area: "<<shape.Area()<<"\n";
}

int main(){
    Rectangle rectangle(10, 5);
    Circle circle(10);
    showArea(rectangle);
    showArea(circle);

    return 0;
}
