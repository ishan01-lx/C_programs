#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter the number:  ");
    scanf("%d",&n);
    int rem=0, sum=0, p=0;
    while(n!=0){
        rem=n%10;
        sum=sum+pow(2,p)*rem;
        n=n/10;
        p++;
    }
    printf("%d",sum);
}

// Output: Enter the number:  1010
// 10