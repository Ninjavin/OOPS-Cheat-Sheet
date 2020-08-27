#include<bits/stdc++.h>
using namespace std;

class first{

    public:
        virtual void show(){
            cout<<"Hello from show First"<<endl;
        }
        virtual void display(){
            cout<<"Hello from display First"<<endl;
        }
        void fun(){
            cout<<"Hello from fun First"<<endl;
        }
};

// Writing the function virtual again when overriding in the derived class second makes function virtual for the next class if this class is inherited. show was virtual in first and is overridden in second so show of second will be called.

//fun was not virtual in first so fun of class first will be called.

//display is only present in first so it will be called.

class second : public first{

    public:
        virtual void show(){
            cout<<"Hello from show Second"<<endl;
        }
        virtual void fun(){
            cout<<"Hello from fun Second"<<endl;
        }
};

int main(){

    first *ptr;
    first f;
    second s;
    ptr = &f;
    ptr->show();
    ptr->display();
    ptr->fun();
    ptr = &s;
    ptr->show();
    ptr->display();
    ptr->fun();

    return 0;
}
