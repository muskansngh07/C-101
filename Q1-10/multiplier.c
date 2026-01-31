#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int end;
    printf("Enter till where you want to print the table of %d: ",n);
    scanf("%d",&end);
    for(int i=1;i<=end;i++){
        int result=i*n;
        printf("%d x %d = %d\n",n,i,result);
    }
    return 0;
}