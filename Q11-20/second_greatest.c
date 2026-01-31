#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    if(n<2){
        printf("Incomplete information.");
        return 0;
    }
    int a[n];
    printf("Enter the elements of the array: \n");
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=INT_MIN;
    int second_max=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            second_max=max;
            max=a[i];
        }
        else if(a[i]>second_max && a[i]<max)
            second_max=a[i];
    }
    if(second_max!=INT_MIN)
        printf("%d is the second-max element in the array",second_max);
    else    
        printf("No second max element found!");
        return 0;
}