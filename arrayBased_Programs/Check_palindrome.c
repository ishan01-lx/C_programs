// WAP to check whether the given array is palindrome or not

#include<stdio.h>
int main(){
    int a[5]={20,30,10,45,55};
    int i,j;
    int n=5;
    int isPalindrome=1;
    
    for(i=0,j=n-1;i<j;i++,j--){
        if(a[i]!=a[j]){
            isPalindrome=0;
            break;
        }
    }
    if(isPalindrome) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }

    return 0;
}