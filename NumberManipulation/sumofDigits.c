// WAP to calculate and display the sum of digits of a number.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:  ");
    scanf("%d",&n);
    int sum=0,rem=0;
    while(n!=0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("%d",sum);
}

// Output: Enter the number:  123
// 6
