#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array: \n");
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    printf("Enter the  number of times it needs to be rotated: ");
    scanf("%d",&k);
    k=k%n;
    for(int i=0;i<k;i++){
        int temp=a[0];
        for(int j=0;j<n-1;j++){
            a[j]=a[j+1];
        }
        a[n-1]=temp;
    }
    printf("The rotated array is: \n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}