#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:  ");
    scanf("%d",&n);
    int mul=1,rem=0;
    while(n!=0){
        rem=n%10;
        mul=mul*rem;
        n=n/10;
    }
    printf("%d",mul);
}

// Output: Enter the number:  123
// 6