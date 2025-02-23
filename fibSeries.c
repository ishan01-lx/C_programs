// WAP to display Fibonacci Series:
// 1 1 2 3 5 8....... upto nth terms.

#include<stdio.h>
void fibSeries(int);
int main(){
    int n;
    printf("Enter the number:  ");
    scanf("%d",&n);
    fibSeries(n);
    return 0;
}
void fibSeries(int num){
    int i;
    int a=1,b=1,c=0;
    for(i=0;i<num;i++){
        printf("%d\t",c);
        a=b;
        b=c;
        c=a+b;
    }
}
