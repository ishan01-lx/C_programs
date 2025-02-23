// WAP to find the greatest number in the array.
#include<stdio.h>

int main(){
    int a[5]={20,30,2,45,6};
    
    int greatest = a[0];
    for(int i=0;i<5;i++){
        if(a[i]>greatest){
            greatest=a[i];
        }
    }
    printf("%d",greatest);
}