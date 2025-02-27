#include<stdio.h>
int main(){
    int i,j,p;
    for(i=2;i<=100;i++){
        p=1;
        for(j=2;j*j<=i;j++){
            if(i%j==0){
                p=0;
                break;
            }
        }
        if(p){
            printf("%d\t",i);
        }
    }
}

// Output: 2	3	5	7	11	13	17	19	23	29	31	37	41	43	47	53	59	61	67	71	73	79	83	89	97