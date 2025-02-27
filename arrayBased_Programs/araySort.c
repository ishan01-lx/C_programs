#include<stdio.h>
int main(){
    int c[5]={10,20,30,40,50};
    int i;
    int temp;
    for(i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(c[i]>c[j]){
               temp =c[i];
               c[i]=c[j];
               c[j]=temp;
            }
        }
    }

    for(i=0;i<5;i++){
        printf("%d\t",c[i]);
    }
    return 0;
}
// Output: 10	20	30	40	50