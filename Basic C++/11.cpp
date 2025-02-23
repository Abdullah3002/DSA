#include<bits/stdc++.h>
using namespace std;

int main() {

    // 2D array
   
    // // Declare a 2D array with 3 rows and 2 columns
    int arr[3][2]= {{1,2},{3,4},{5,6}};
    
    // Access and print elements from the array
    for(int i=0; i<3;i++){
        for(int j=0; j<2; j++){
            cout<< "arr[ " << i << "]" "[" << j  << "] = " << arr[i][j] <<endl;

        }
    }

    
    
    // arr[1][3] = 78;
    // cout<<arr[1][3];
        

    return 0;
}