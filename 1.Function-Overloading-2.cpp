#include<bits/stdc++.h>
using namespace std;

int Max(int a, int b){
    return (a>b) ? a : b;
}

float Max(float a, float b){
    return (a>b) ? a : b;
}

char Max(char a, char b){
    return (a>b) ? a : b;
}

int main(){
    int x, y, maxInt;
    float a, b, maxFloat;
    char c, d, maxChar;

    cout<<"Integers: ";
    cin >> x >> y;

    cout<<"\nFloats: ";
    cin >> a >> b;

    cout<<"\nCharacters: ";
    cin >> c >> d;

    cout<<"\nMax Integer: "<<Max(x, y)<<endl;
    cout<<"Max Float: "<<Max(a, b)<<endl;
    cout<<"Max Char: "<<Max(c, d)<<endl;
    return 0;
}
