#include <iostream>
#include <stack>
using namespace std;
int main(){
   stack<int>stck;
   int Product = 1;
   stck.push(1);
   stck.push(2);
   stck.push(3);
   stck.push(4);
   stck.push(5);
   stck.push(6);
   while (!stck.empty()){
      Product = Product * stck.top();
      cout<<"\nsize of stack is: "<<stck.size();
      stck.pop();
   }
   return 0;
}
