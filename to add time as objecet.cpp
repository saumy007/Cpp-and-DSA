// program to add time in object as a function
#include<iostream>
class Time{
    int hr;
    int min;
    public :
    void get_time(int a , int b){
        hr = a;
        min = b;
    }
    void put_time(){
        cout<<"the time is :"<<" hr "<< hr << " min "<< min << endl;

    }
    void sum(Time t1, Time t2){
        min = t1.min + t2.min;
        hr = t2.hr + t2.hr;
        

    }
};

int main(){
    T t1 , t2 ;
    ime t1,t2;
    t1.get_time();
    t2.get_time();
    t3.sum(t1 , t2);
    cout << "The Sum of the times is ";
    t3.put_time(); 
    return 0;  
}