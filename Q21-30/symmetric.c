#include<stdio.h>
int main(){
    int r1,c1;
    printf("Enter the number of rows: ");
    scanf("%d",&r1);
    printf("Enter the number of columns: ");
    scanf("%d",&c1);
    if(r1!=c1)
    {
        printf("Invalid. Try again!");
        return 0;
    }
    int a[r1][c1];
    printf("Enter the elements of the matrix: \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int symmetric=1;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            if(a[i][j]!=a[j][i]){
                symmetric=0;
                printf("Not a symmetric matrix\n");
                return 0;
            }
        }
    }
    printf("The matrix is symmetric.\n");
}
