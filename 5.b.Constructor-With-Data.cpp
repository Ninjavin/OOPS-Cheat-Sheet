#include<bits/stdc++.h>
using namespace std;

class strin{
    
    char str[20];

    public:
        strin();
        strin(char s[]);
        void show();
};

strin::strin(){
    strcpy(str, "Hari");
    cout<<"Default Constructor Called\n";
}

strin::strin(char s[]){
    strcpy(str, s);
    cout<<"Argument Constructor Called\n";
}

void strin::show(){
    cout<<"String is "<<str<<endl;
}

int main(){
    
    strin s1;
    s1.show();
    s1 = strin("Vijay");
    s1.show();

    return 0;
}
