#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of the array: \n");
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    int i=0,j=0;
    printf("The array after removing duplicates is: \n");
    while(i<n){
        if(i==0 || a[i]!=a[i-1])
            printf("%d ",a[i]);
        i++;
    }
    return 0;
}