#include<bits/stdc++.h>
using namespace std;


   // pass by value 
   void doSomething(string s){
        s[0] = 't';       
        cout<<s<<endl;          // replace with r and show taj
    }

    int main(){
        string s = "raj";
        doSomething(s);
        cout<<s << endl;   // raj

        return 0;
    }

  
