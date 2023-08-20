//== operator 
#include<iostream>
using namespace std;
class car{
    int cost;
    public :
    car(int x ){
        cost = x;
    }

    void show(){
        cout << cost ;    // bool is true or false
        

    }

    bool operator ==( car &c){
        if(cost == c.cost){
            return true;
        
        }
        else {

            return false;
        }
        
    }


};


int main(){
    car obj(20),obj2(30);

    if(obj == obj2){
        cout<< " same "<<endl;
    }
    else{
        cout<<" not same ";
    }
   
}