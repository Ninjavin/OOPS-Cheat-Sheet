#include<bits/stdc++.h>
using namespace std;

class demo_sum{
    private:
        int num;
        static int count;

    public:
        void input(){
            cout<<"Enter Object"<<++count<<" : ";
            cin >> num;
        }

        // Overloads binary + and accepts an argument of class demo_sum type. In the main the statement d1+d2 is interpreted internally as d1.operator + (d2) i.e. d1 calls the function d1 and pass d2 as argument to this overloaded binary + operator function. Inside the function num belongs to objects d1 and d2 is copied to temp object so temp.num is a copy of d2.num

        void operator +(demo_sum temp){
            int x;
            x = num + temp.num;
            cout<<"\nSum: "<<x<<endl;
        }

        void show(){
            cout<<"The num is "<<num<<" \n";
        }
};

int demo_sum :: count;

int main(){
    
    demo_sum d1, d2, d3;
    d1.input();
    d1.show();
    d2.input();
    d2.show();
    d3.input();
    d3.show();

    d1+d2;
    d2+d3;
    d1+d3;

    return 0;
}
