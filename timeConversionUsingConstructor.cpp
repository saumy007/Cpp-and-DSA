// time conversion in cpp using constructor in c++
#include<iostream>
using namespace std;
class Time{
    int hr;
    int min;
    public :
    Time(){
        hr = 0;
        min = 0;
    } //def 
    
       
    Time(int t){
        hr = t/60;
        min = t % 60;
    }

    void input(){
        cout<<"Enter hours of time bitch " << endl;
        cin>>hr;
        cout<<"Enter minute of time bitch " << endl;
        cin>>min;
    }
    void show(){
        cout  << " time is " << hr << " Hours and " << min << " minutes" ;
    }
};
int main(){
    Time t;
    int x = 120;
    t = x;   // conversionn 
    t.show();
}
