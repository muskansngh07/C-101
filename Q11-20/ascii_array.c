#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    char a[n];
    printf("Enter elements of the array: \n");
    for(int i=0;i<n;i++){
        scanf(" %c",&a[i]);
    }
    printf("The ASCII values is as follows:\n");
    for(int i=0;i<n;i++){
        printf("%c -> %d\n",a[i],(int)a[i]);
    }
    return 0;

}