#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};

class Linked_List{

    private:

        Node *start;

    public:

        Linked_List(){  // Constructor
            start = NULL;
        }

        void addData(int i){
            Node *new_link = new Node; //Creating New Node
            new_link -> data = i;
            new_link -> next = start;
            start = new_link;
        }

        void display();
};

void Linked_List :: display(){
    Node *move = start;
    Node *temp;
    while(move){
        cout<<move->data << "->";
        temp = move;
        move = move->next;
        delete temp;
    }
    cout<<"NULL\n";
}

int main(){
    
    Linked_List Ninja;
    cout<<"Elements : " <<endl;
    for(int i=5 ; i<=10 ; i++)
        Ninja.addData(i);
    Ninja.display();
    return 0;
}
