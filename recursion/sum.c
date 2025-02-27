#include<stdio.h>
int sum(int);
int main(){
    int n;
    printf("Enter the number:  ");
    scanf("%d",&n);
    printf("The sum is %d.",sum(n));
    return 0;
}
int sum(int n){
    if(n==0){
        return 0;
    }
    else {
        return (n+sum(n-1));
    }
}

// Output: Enter the number:  5
// The sum is 15.