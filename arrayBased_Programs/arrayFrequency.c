#include<stdio.h>
int main(){
    int a[5]={2,3,4,5,2};
    int i;
    int f[5];
    for(i=0;i<5;i++){
        f[i]=0;
    }
    
    for(i=0;i<5;i++){
        if(f[i]==1){
            continue;
        }
        
        int count = 1;
        for(int j=i+1;j<5;j++){
            if(a[i]==a[j]){
                count++;
                f[j]=1;
            }
        }
        printf("Element %d appears %d times\n", a[i], count);
    }
    
    return 0;
}

// Output: Element 2 appears 2 times
// Element 3 appears 1 times
// Element 4 appears 1 times
// Element 5 appears 1 times
