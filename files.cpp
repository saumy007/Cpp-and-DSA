//files in cpp
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
/*

useful classes in c++ for input and output 

1. ifstreambase 
2. ifstream ---> derived from fstreambase
3. ofstream ---> derived from fstreambase
 there are 2 ways to open a class in c++
 1. using Costructor function and
 2. using the member function open() of the class 

*/

int main(){



    ifstream in("SampleFile.txt");
    string st2 ;
    //st2 = "saumy is a Developer" ;
    cin>>st2;
    
    cout<< "  content here is " << st2 ;

    while(in.eof()){
        getline(in,st2);
        cout<< st2 << endl;

    }
        in.close();
    //string st2;
    //ifstream in("SampleFile.txt");
    //getline(in,st2);
    
    
    
    
    
    
    return 0;

}