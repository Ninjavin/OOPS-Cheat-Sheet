#include<bits/stdc++.h>
using namespace std;

class super{
    
    int sup_a;

    public:

        void sup_input(int x){
            sup_a = x;
        }

        void sup_show(){
            cout<<"sup_a: "<<sup_a<<endl;
        }
};

class sub: public super{
    
    int sub_a;

    public:

        void sub_input(int x){
            sup_input(x * 2);
            sub_a = x;
        }

        void sub_show(){
            sup_show();
            cout<<"sub_a: "<<sub_a<<endl;
        }
};

int main(){
    
    int i;
    sub o1;
    cout<<"Enter: ";
    cin >> i;
    o1.sub_input(i);
    o1.sub_show();
    return 0;
}
