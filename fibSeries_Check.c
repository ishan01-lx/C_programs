#include<stdio.h>
int main(){
    int n;
    printf("Enter the number.");
    scanf("%d",&n);
    int a=0,b=1,c=1;
    if(n<0){
        printf("The number is not positive.");
    }
    else if(n==0 || n==1){
        printf("The number is of fibonacci series.");
    }
    else {
        while(c<=n){
            if(c==n){
                printf("The number is of fibonacci series.");
                return 0;
            }
            a=b;
            b=c;
            c=a+b;
        }
        printf("THe number is not of fibonacii series.");
    }
    return 0;
}