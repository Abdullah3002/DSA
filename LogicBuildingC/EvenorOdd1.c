#include<stdio.h>

int isEven(int n){
    return (n % 2 == 0);
}

int main(){
    int n;
    scanf("%d",&n);
    if(isEven(n)){
        printf("true");
    }

    else{
        printf("false");

    }
}