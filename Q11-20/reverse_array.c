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
    int x=0,y=sizeof(a)/sizeof(a[0])-1;
    while(x<y){
        int temp=a[x];
        a[x]=a[y];
        a[y]=temp;
        x++;
        y--;
    }
    printf("Reversed array is: \n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}