#include<stdio.h>

void printTable(int n){
    for(int i = 1; i<=10; i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
}
int main(){

    int n;            //  in terminal write 5
    scanf("%d",&n);
    printTable(n);
    return 0;
   
}