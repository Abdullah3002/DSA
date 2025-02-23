#include<bits/stdc++.h>
using namespace std;

// pass by reference 
void doSomething(string &s){      // just attach &s here
    s[0] = 't';
    cout << s << endl;   // taj
}
int main(){
    string s = "raj";
    doSomething(s);
    cout<< s << endl;     // taj

    return 0;
}