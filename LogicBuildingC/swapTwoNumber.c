#include<stdio.h>
int main(){
    int n,n1;
    scanf("%d %d",&n,&n1);

    int temp = n;
    n = n1;
    n1 = temp;

    printf("%d %d",n,n1);
    return 0;

    // or printf("%d %d",n1,n); 


}