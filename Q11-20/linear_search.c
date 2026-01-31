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
    printf("Enter the element to be searched: ");
    int target;
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(a[i]==target)
        {
            printf("Target found at index %d\n",i);
            return 0;
        }
    }
    printf("Element not found!\n");
    return 0;
}