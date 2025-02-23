// WAP to check whether the given number is of fibonacci series or not.WAP to check whether the given number is of fibonacci series or not.

#include<stdio.h>
int fibCheck(int n){
    if(n==0 || n==1){
        return 1;
    }
    int a=0, b=1, c=1;
    while(b<n){
        c = a+b;
        a = b;
        b = c;
        if(b==n){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(fibCheck(n)){
        printf("%d is a Fibonacci number.\n", n);
    }
    else{
        printf("%d is not a Fibonacci number.\n", n);
    }
    return 0;
}