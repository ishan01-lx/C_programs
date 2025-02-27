#include<stdio.h>
void mul(int A[3][3],int B[3][3]);
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
    mul(A,B);
    return 0;
}

void mul(int A[3][3], int B[3][3]){
    int i,j,k;
    int C[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            C[i][j]=0;
        }
    }
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                C[i][j]=C[i][j]+A[i][k]*B[k][j];
            }
        }
    }
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
}

// Output: Enter element of matrix A:
// Enter [0]x[0]:   1
// Enter [0]x[1]:   2
// Enter [0]x[2]:   3
// Enter [1]x[0]:   4
// Enter [1]x[1]:   5
// Enter [1]x[2]:   6
// Enter [2]x[0]:   7
// Enter [2]x[1]:   8
// Enter [2]x[2]:   9

// Enter element of matrix B:
// Enter [0]x[0]:   1
// Enter [0]x[1]:   2
// Enter [0]x[2]:   3
// Enter [1]x[0]:   4
// Enter [1]x[1]:   5
// Enter [1]x[2]:   6
// Enter [2]x[0]:   7
// Enter [2]x[1]:   8
// Enter [2]x[2]:   9

// 30	36	42
// 66	81	96
// 102	126	150
