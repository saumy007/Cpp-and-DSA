// oops lab 33
#include<iostream>
#include<stdio>
#include<string>
using namespace std;
class account{
    
     public:
    string c_name;
    int acc_no;
    int balance;
    int amount;
    int acc_type;

   
    void getdata(){
        cout<<"Enter the Customer name :"<<endl;
        cin>>c_name;
        cout<<"Enter the Account Number :"<<endl;
        cin>>acc_no;
        cout<<"Enter the type of account \n 1: Savings\n 2: Current";
        cin>>acc_type;
        cout<<"The balance in Account";
        cin>>balance;
        cout<<"The amount the ";

    }
    void display(){
        cout<<"The Customer Name is :"<<c_name;
        cout<<"The Account Number is :"<<acc_no;
    }
    void withdraw(){
    cout<<"\nEnter the amount you want to withdraw :";
    cin>>amount;
    if(amount>balance)
    cout<<"\nInsuficient balance";
    else
    balance=balance-amount;
    display();
    }
}
class cur_acct : public account {
    int cur_amt;
    public:
    void penalty(){

    if(cur_amt<1000)
    cur_acct = cur_acct-50;

    }
    
}
 class sav_acct : public account{
    int sav_amt;
    void interest(){
    int t;
    cout<<"\nEnter time interval in year:";
    cin>>t;
    balance=balance*(1+2*t);
    display();
}
    
}
int main(){

    sav_acct a;
    a.getdata();
    a.display();
    return 0;
}
