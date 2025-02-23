#include<bits/stdc++.h>
using namespace std;

// pass by reference 
void doSomething(int &num){
    cout<< num << endl; // 10 
    num += 5;
    cout<< num << endl; // 15
    num += 5;
    cout<< num << endl; // 20
}

int main(){
    int num = 10;
    doSomething(num);
    cout<<num << endl;  // 20

    return 0;
}