#include<stdio.h>
int main(){
    int A[2][3];
    int i,j;
    
    printf("Enter element of matrix A:  \n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Enter [%d]x[%d]:   ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    
    printf("The matrix elements after transpose are:  \n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d\t",A[j][i]);
            
        }
        printf("\n");
    }
    
    return 0;
}

// Output: Enter element of matrix A:
// Enter [0]x[0]:   1
// Enter [0]x[1]:   2
// Enter [0]x[2]:   3
// Enter [1]x[0]:   4
// Enter [1]x[1]:   5
// Enter [1]x[2]:   6

// The matrix elements after transpose are:
// 1	4
// 2	5
// 3	6