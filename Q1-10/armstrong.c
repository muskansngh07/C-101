#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int temp=n;
    int digit=0,sum=0;
    while(n!=0){
        int x=n%10;
        digit++;
        n/=10;
    }
    int temp1=temp;
    while(temp!=0){
        int y=temp%10;
        sum+=(round(pow(y,digit))); //use round for better precision
        temp/=10;
    }
    if(sum==temp1)
        printf("%d is an armstrong number.",temp1);
    else    
        printf("%d is not an armstrong number.",temp1);
}