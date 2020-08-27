#include<bits/stdc++.h>
using namespace std;

class student{

    char sname[20];
    int rollno;

    public:
        
        void input_st(){
            cout<<"Enter student name: "<<endl;
            cin.getline(sname, 20);
            cout<<"Enter roll: "<<endl;
            cin>>rollno;
        }

        void show_st(){
            cout<<"\tName = "<<sname<<endl;
            cout<<"\tRoll = "<<rollno<<endl;
        }
};

class Subject : public student{
    char subject[25];
    public:
        void input_sub(){
            input_st();
            cin.ignore();
            cout<<"Enter subject : "<<endl;
            cin.getline(subject, 25);
        }
        void show_sub(){
            show_st();
            cout<<"\tSubject = "<<subject<<endl;
        }
};

class Internal:virtual public Subject{
    char subject[25];
    protected:
        int i_marks;
    public:
        void input_im(){
            cout<<"Enter internal marks (0 to 20)"<<endl;
            cin >> i_marks;
        }
        void show_im(){
            cout<<"\tInternal Marks : "<<i_marks<<endl;
        }
};

class External:virtual public Subject{
    protected:
        int e_marks;
    public:
        void input_em(){
            cout<<"Enter external marks (0 to 80)"<<endl;
            cin >> e_marks;
        }
        void show_em(){
            cout<<"\tExternal Marks : "<<e_marks<<endl;
        }
};

class Total:public Internal, public External{
    int total_marks;
    public:
        void input(){
            input_sub();
            input_im();
            input_em();
        }
        void show(){
            show_sub();
            show_im();
            show_em();
            total_marks = i_marks + e_marks;
            cout<<"\tTotal : "<<total_marks<<endl;
        }
};

int main(){
    
    Total tm;
    tm.input();
    cout<<"\n\t +++++++++++++++++++++++++++++++ Student Report +++++++++++++++++++++++++++++\n"<<endl;
    tm.show();
    return 0;
}
