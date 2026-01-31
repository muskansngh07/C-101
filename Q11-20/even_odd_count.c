#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of the array: \n");
    int count1=0,count2=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            count1++;
        else
            count2++;
    }
    printf("Even count is %d; Odd count is %d\n",count1,count2);
    return 0;
}