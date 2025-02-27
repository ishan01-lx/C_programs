#include<stdio.h>
int main(){
    int a[5]={2,3,4,5,6};
    int b[2]={1,8};
    int n1=5,n2=2;
    int n3=n1+n2;
    int c[n3];
    int i=0;
    for(int j=0;j<n1;j++){
        c[i]=a[j];
        i++;
    }
    
    for(int j=0;j<n2;j++){
        c[i]=b[j];
        i++;
    }
    printf("Merged array: ");
    for (int i = 0; i < n3; i++) {
        printf("%d ", c[i]);
    }
    
    return 0;
    
}

// Output: Merged array: 2 3 4 5 6 1 8