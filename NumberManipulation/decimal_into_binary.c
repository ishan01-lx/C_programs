#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:  ");
    scanf("%d",&n);
    int rem=0,sum=0,i=1;
    while(n!=0){
        rem=n%2;
        sum=sum+rem*i;
        n=n/2;
        i=i*10;
    }
    printf("%d",sum);
}

// Output: Enter the number:  10
// 1010