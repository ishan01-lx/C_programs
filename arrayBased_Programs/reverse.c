// WAP to reverse the elements of an array.

#include<stdio.h>
int main(){
    int a[5]={20,30,10,45,55};
    int temp,i,j;
    int n=5;
    for(i=0,j=n-1;i<j;i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}