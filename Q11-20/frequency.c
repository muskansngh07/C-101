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
    int freq[n];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        int count=1;
        while(i<n-1 && a[i]==a[i+1]){
            count++;
            i++;
        }
        printf("The frequency of %d is %d\n",a[i],count);
    }
    return 0;
}