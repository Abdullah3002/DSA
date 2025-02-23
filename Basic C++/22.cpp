#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5];

    for(int i=0; i<=5 ; i++ ){
        cin >> arr[i];   // work is easy instead of cin>> arr[0] >> arr[1]>> arr[2]....>> arr[5]
    }

    for(int i=0; i<=5; i++){
        cout<< arr[i] << " ";    // work is easy instead of cout << arr[0] << arr[1]<< arr[2] <<.....arr[5]
    }

    return 0;
}