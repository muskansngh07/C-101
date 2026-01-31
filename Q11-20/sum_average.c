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
        sum+=a[i];
    }
    double average=(double)(sum/n);
    printf("The sum of elements in the array is %d",sum);
    printf("\nThe average of elements in the array is %.2f\n",average);
    return 0;
}