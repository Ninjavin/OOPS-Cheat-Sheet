#include<bits/stdc++.h>
using namespace std;

void show(int x){
    cout<<"int show "<<x<<endl;
}

void show(char x){
    cout<<"char show "<<x<<endl;
}

void show(float x){
    cout<<"float show "<<x<<endl;
}

void show(char* x){
    cout<<"char * show "<<x<<endl;
}

int main(){
    int a = 10;
    char c = 'v';
    float b = 6.9;
    char *s = "Ninjavin";

    show(a);
    show(c);
    show(b);
    show(s);
    return 0;
}
