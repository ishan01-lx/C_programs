#include<stdio.h>
void add(int A[3][3],int B[3][3]);
int main(){
    int A[3][3], B[3][3];
    int i,j;
    
    printf("Enter element of matrix A:  \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter [%d]x[%d]:   ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    
    printf("Enter element of matrix B:  \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter [%d]x[%d]:   ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    add(A,B);
    return 0;
}

void add(int A[3][3], int B[3][3]){
    int i,j;
    int C[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
}