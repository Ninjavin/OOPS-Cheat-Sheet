#include<bits/stdc++.h>
using namespace std;

class Animal{

    private:

        string name;
        double height; 
        double weight;
        static int numOfAnimals;

    public:

        string getName(){
            return name;
        }

        void setName(string name){
            this->name = name;
        }

        double getHeight(){
            return height;
        }

        void setHeight(double height){
            this->height = height;
        }

        double getWeight(){
            return weight;
        }

        void setWeight(double weight){
            this->weight = weight;
        }

        void setAll(string, double, double);

        // Constructor
        Animal(string, double, double);
        Animal();

        // Deconstructor
        ~Animal();

        static int getNumbersOfAnimals(){
            return numOfAnimals;
        }

        void toString();

};

int Animal::numOfAnimals = 0;

void Animal::setAll(string name, double height, double weight){
    this->name = name;
    this->weight = weight;
    this->height = height;
    Animal::numOfAnimals++;
}

Animal::Animal(string name, double height, double weight){
    this->name = name;
    this->weight = weight;
    this->height = height;
    Animal::numOfAnimals++;
}

Animal::Animal(){
    this->name = "";
    this->weight = 0;
    this->height = 0;
    Animal::numOfAnimals++;
}

Animal::~Animal(){
    cout << "Animal "<< this->name << " destroyed\n";
}

void Animal::toString(){
    cout<<this->name<< " is " << this->height << " cms tall and " << this->weight << " kgs in weight\n";
}

class Dog: public Animal{
    private:
        string sound = "Woof";
    public:
        void makeSound(){
            cout<<"The dog "<<this->getName()<<" says " << this->sound <<"\n";
        }

        Dog(string, double, double, string); // Constructor
        Dog(): Animal(){}; // Default Constructor
        void toString();
};

Dog::Dog(string name, double height, double weight, string sound) : Animal(name, height, weight){
    this-> sound = sound;
}

void Dog::toString(){
    // cout << this->name << " is " << this->height << " cms tall and " << this->weight <<" kgs in weight\n "; // Won't work because name is private so inherited class cannot call it
    cout<<this->getName() <<" is "<< getHeight() <<" cms tall and "<<getWeight()<<" kgs in weight and says "<<this->sound<<"\n";
}

int main(){
    Animal fred;
    fred.toString();
    fred.setHeight(22);
    fred.setWeight(10);
    fred.setName("Fred");
    fred.toString();

    // Constructor
    Animal tom("Tom", 36, 15);
    tom.toString();

    Dog spot("Spot", 38, 16, "Wooooooof");
    spot.toString();

    cout << "Number of Animals: "<<Animal::getNumbersOfAnimals() << "\n";

    return 0;
}
