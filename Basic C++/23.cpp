#include<bits/stdc++.h>
using namespace std;

// array is always pass by reference not need include & sign
void doSomething(int arr[], int n){
    arr[0] += 100;
    cout<< "Value inside Function: " << arr[0] << endl;
}

int main(){

    int n = 5;
    int arr[n];
    for(int i=0; i<n;i++){
        cin >> arr[i];
    }

    doSomething(arr,n);

    cout<< "Value inside int main: " << arr[0] << endl;

    return 0;
}