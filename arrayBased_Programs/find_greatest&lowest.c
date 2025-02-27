#include<stdio.h>
int main(){
    int a[5]={2,3,6,4,8};
    int greatest = a[0];
    int lowest = a[0];
    int i;
    for(i=0;i<5;i++){
        if(a[i]>greatest){
        greatest = a[i];
        }
        else if(a[i]<lowest){
            lowest = a[i];
        }
    }
    printf("The greatest number is: %d\n",greatest);
    printf("The lowest number is: %d\n",lowest);
    
}
// Output: The greatest number is: 8
// The lowest number is: 2