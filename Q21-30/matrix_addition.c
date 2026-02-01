#include<stdio.h>
int main(){
    int r1,c1;
    printf("Enter the number of rows: ");
    scanf("%d",&r1);
    printf("Enter the number of columns: ");
    scanf("%d",&c1);
    int a[r1][c1];
    printf("Enter the elements of the array 1: \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int r2,c2;
    printf("Enter the number of rows: ");
    scanf("%d",&r2);
    printf("Enter the number of columns: ");
    scanf("%d",&c2);
    int b[r2][c2];
    printf("Enter the elements of the array 2: \n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    if(r1!=r2 || c1!=c2)
    {
        printf("Addition not possible!");
        return 0;
    }
    printf("The resultant matrix is: \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}