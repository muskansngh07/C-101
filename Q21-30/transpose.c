#include<stdio.h>
int main(){
    int r1,c1;
    printf("Enter the number of rows: ");
    scanf("%d",&r1);
    printf("Enter the number of columns: ");
    scanf("%d",&c1);
    int a[r1][c1];
    printf("Enter the elements of the matrix: \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The transpose of the matrix is: \n");
    for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}