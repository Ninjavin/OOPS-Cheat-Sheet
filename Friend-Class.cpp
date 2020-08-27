#include<bits/stdc++.h>
using namespace std;

class Customer{
    private:
        friend class GetCustomerData;
        string name;
        
    public:
        Customer(string name){
            this->name = name;
        }
};

class GetCustomerData{
    public:
        static string GetName(Customer& customer){
            return customer.name;
        }
};

int main(){

    Customer tom("tom");
    GetCustomerData getName;
    cout<<"Name: "<<getName.GetName(tom)<<"\n";
    return 0;
}
