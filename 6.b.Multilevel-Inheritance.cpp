#include<bits/stdc++.h>
using namespace std;

class first{

    protected:
        int fa;

    public:
        void input_f(){
            cout<<"fa: ";
            cin >> fa;
        }
};

class second: public first{
    
    protected:
        int sa;

    public:
        void input_s(){
            input_f();
            cout<<"sa: ";
            cin >> sa;
        }
};

class third: public second{

    protected:
        int ta;

    public:
        void input_t(){
            input_s();
            cout<<"ta: ";
            cin >> ta;
        }

        void show(){
            cout<<"FA : "<<fa<<endl;
            cout<<"SA : "<<sa<<endl;
            cout<<"TA : "<<ta<<endl;
        }

        int max(){
            int t1, t2;
            t1 = (fa > sa) ? fa : sa;
            t2 = (ta > t1) ? ta : t1;

            return t2;
        }
};

int main(){

    third t;
    t.input_t();
    t.show();
    cout<<"Max is : "<<t.max()<<endl;
    return 0;
}
