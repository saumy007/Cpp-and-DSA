//reverse a string Code
#include<iostream>
using namespace std;
bool checkPalindrome(string str, int i, int j){
    if(i>j){
        //break;
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
        return checkPalindrome(str,i+1,j-1);
    }
}
int main(){
    string str = "abba";
    cout << endl;
    bool isPalindrome = checkPalindrome(str,0,str.length()-1);
    if(isPalindrome){
        cout<<"the reverse string is "<<endl;
    }
    else{
        cout <<"this is not a palindrome"<<endl;
    }
}