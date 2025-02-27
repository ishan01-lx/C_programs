#include<stdio.h>
int main(){
    int a[5]={2,3,6,4,8};
    int greatest = a[0];
    int sgreat=-1;
    int i;
    
    for(i=0;i<5;i++){
        if(a[i]>greatest){
            sgreat = greatest;
            greatest = a[i];
        }
        else if(a[i]>sgreat && a[i]!=greatest){
            sgreat = a[i];
        }
    }
    if (sgreat == -1) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", sgreat);
    }

    return 0;
}
// Output: The second largest element is: 6