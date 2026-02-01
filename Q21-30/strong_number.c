// 145=1!+4!+5!
#include<stdio.h>
int main(){
    int fact[10]={1,1,2,6,24,120,720, 5040, 40320, 362880};
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int temp=num,sum=0;
    while(num!=0){
        int x=num%10;
        sum+=fact[x];
        num/=10;
    }
    printf("Sum of factorial of the digits of %d is %d.\n",temp,sum);
    if(temp==sum)
        printf("%d is a strong number.\n",temp);
    else    
        printf("%d is not a strong number.\n",temp);
}

// can also be done using a helper function that calculates factorial of every digit.