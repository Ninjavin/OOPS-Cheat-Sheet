#include<bits/stdc++.h>
using namespace std;

// A static function is one for all objects and called by using :: with class name
// Static Function must be declared and defined inside the class

class demo{

    public:
        static void show(){
            cout<<"Demo of Static Function\n";
        }
};

// static void demo :: show(){
//      cout<<"Demo"<<endl;
// }

int main(){

    demo::show();

    return 0;
}
