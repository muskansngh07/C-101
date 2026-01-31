#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of terms in the sequence: ");
    scanf("%d",&n);
    int a=0,b=1;
    printf("The sequence is: ");
    for(int i=1;i<=n;i++){
        if(i==1)
        {   
            printf("%d ",a);
            continue;
        }
        if(i==2)
        {
            printf("%d ",b);
            continue;
        }
        int c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}