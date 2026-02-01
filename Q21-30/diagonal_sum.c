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
    int sum=0;
    printf("Enter the elements of the matrix: \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
            if(i==j)
                sum+=a[i][j];
        }
    }
    printf("The sum of principal diagonal elements is %d\n",sum);
}