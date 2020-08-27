#include<bits/stdc++.h>
using namespace std;

class Shape{
    protected:
        double height;
        double width;
        
    public:
        Shape(double length){
            height = length;
            width = length;
        }
        
        Shape(double h, double w){
            height = h;
            width = w;
        }

        virtual double Area(){
            return height*width;
        }
};

class Circle : public Shape{

    public:
        Circle(double w) : Shape(w){

        }
        
        double Area(){
            return 3.14159 * pow((width / 2), 2);
        }
};

void showArea(Shape& shape){
    cout<<"Area: "<<shape.Area()<<"\n";
}

int main(){
    
    Shape square(10, 5);
    Circle circle(10);
    showArea(square);
    showArea(circle);
    return 0;
}
