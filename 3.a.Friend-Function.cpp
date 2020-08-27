#include<bits/stdc++.h>
using namespace std;

class second;

class first{
    
    int fx;

    public:
        void input(int x){
            fx = x;
        }

        friend void findMax(first, second);
};

class second{
    
    int sx;

    public:
        void inputs(int x){
            sx = x;
        }

        friend void findMax(first, second);
};

void findMax(first A, second B){
    if(A.fx > B.sx){
        cout<<A.fx<<" of Class first is greater than "<<B.sx<<" of class second\n";
    }else{
        cout<<B.sx<<" of Class second is greater than "<<A.fx<<" of Class first\n";
    }
}

int main(){
    first F;
    second S;
    F.input(40);
    S.inputs(70);
    findMax(F, S);

    return 0;
}
