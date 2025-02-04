#include <bits/stdc++.h>
using namespace std;

bool f(int i, string &s)
{
    int size = s.size();
    if(i>=s.size()) return true;
    if(s[i]!=s[size-i-1]) return false;
    return f(i+1,s);


}

int main(){
    string s = "SAS";
    int a = s.size();
    cout<<f(0,s);
    return 0;
}
