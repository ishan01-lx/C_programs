// WAP to show  Inverted Number Triangle
// 12345
// 1234
// 123
// 12
// 1

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(int i=n;i>1;i--){
        for(int j=1;j<i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
