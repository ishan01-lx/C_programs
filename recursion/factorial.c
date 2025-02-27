#include<stdio.h>
int fact(int);
int main(){
    int n;
    printf("Enter the number:  ");
    scanf("%d",&n);
    printf("The factorial is %d.",fact(n));
    return 0;
}
int fact(int n){
    if(n<=1){
        return 1;
    }
    else {
        return n*fact(n-1);
    }
}

// Output: Enter the number:  5
// The factorial is 120.