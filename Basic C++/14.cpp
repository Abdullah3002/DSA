#include<bits/stdc++.h>
using namespace std;
// Function are set of code which performs something for you
// Function are used to modularise code
// Function are used to increase readability 
// Function are used to use same code multiple times
// void -> which does not returns anything 
// return -> 
// parameterised 
// non parameterised


void printName( string name){
  cout<< "Hey " << name << endl;
}

int main() {
    string name;
    getline(cin,name);
    printName(name);

    string name2;
    getline(cin,name2);
    printName(name2);
    return 0;
}