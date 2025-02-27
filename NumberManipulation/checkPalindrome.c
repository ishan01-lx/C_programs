#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int rev=0,rem=0;
    int temp=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev){
        printf("The number is palindrome.");
    }
    else{
        printf("The number is not.");
    }
    return 0;
}

// Output: Enter the number: 121
// The number is palindrome.