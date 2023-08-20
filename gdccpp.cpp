#include <iostream>
using namespace std;

int main() {
  int n1, n2;

  cout << "Enter two numbers: "<< endl;
  cout<<"Enter first number ";
  cin>>n1;
  cout<<"Enter second number ";
  cin>>n2;
  
  while(n1 != n2) {
    if(n1 > n2)
      n1 -= n2;
    else
      n2 -= n1;
  }

  cout << "GDC = " << n1;
  
  return 0;
}

