/* C++ program to find Area using Function Overloading  */

#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float,float);
int main()
{
        int s,l,b;

        cout<<"Enter side of a square:";
        cin>>s;
        cout<<"Enter length and breadth of rectangle:";
        cin>>l>>b;
     
  
        cout<<"Area of square is"<<area(s);
        cout<<"\nArea of rectangle is "<<area(l,b);

}
int area(int s)
{
    return(s*s);
}
int area(int l,int b)
{
    return(l*b);
}
