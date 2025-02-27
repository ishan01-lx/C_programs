#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:   ");
    scanf("%d",&n);
    int rem=0,rev=0;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("%d",rev);
}

// Output: Enter the number:   123
// 321