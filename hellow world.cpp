#include<bits/stdc++.h>
using namespace std;
class obj{
	int n,m;
	public:
		int input(){
			cout<<"enter the values"<<endl;
			cin>>n;
			cout<<"enter the values"<<endl;
			cin>>m;
			
		}
		int display(){
			
			cout<<n<<endl;
			cout<<m<<endl;
		}
	
	
};
int main(){
	obj a;
	a.input();
	cout<<"display class is here"<<endl;
	a.display();
	
	
}
