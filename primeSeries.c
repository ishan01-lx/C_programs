// WAP to display prime series upto nth terms.
// 2	3	5	7	11	13	17	19	23 ..............upto nth terms.

#include<stdio.h>
void checkPrime(int);
int main(){
    int n;
    printf("Enter the number:  ");
    scanf("%d",&n);
    checkPrime(n);
    return 0;
}
void checkPrime(int num){
    int count=0,n=2;
    
    while(count<num){
        int isPrime=1;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                isPrime=0; // Not a prime number
                break;
            }
        }
        
        // If prime, print it and count it
        if(isPrime){
            printf("%d\t",n);
            count++;
        }
        n++; // Move to the next number
    }
}