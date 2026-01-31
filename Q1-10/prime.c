#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<2)
    {
        printf("%d is not a prime number.\n",n);
        return 0;
    }
    int count=0;
    for(int i=2;i*i<n;i++){
        if(n%i==0)
        {    
            count++;
            break;
        }

    }
    if(count==0)
        printf("%d is a prime number.\n",n);
    else    
        printf("%d is not a prime number.\n",n);
}