// Data base class 
#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    int rollno;
    int namme[40];
    public:
    void getdata(){
        cout<<"enter the ronn number of student"<<endl;
        cin>>rollno;
        cout<<"Enter the name of Student"<<endl;
        cin>>name;

    }
    void display(){
        cout<<" The Rollnumber of Student  "<<rollno;
        cout<<" the Name of Student        "<<name;
    }
}
class teacher : public student {
    private:
    int tname[40];
    int department[20];
    public:
    void getdata1(){
        
    }
    void display1(){
        display();
        cout<<"The name of Teacher "<<tname;
        cout<<"The name of Department of teacher "<<department;


    }
}
int main(){
tacher data;
data.display();



}