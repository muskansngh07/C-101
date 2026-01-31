#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int temp=n;
    int rev=0;
    while(n!=0){
        int x=n%10;
        rev=rev*10+x;
        n/=10;
    }
    if(temp==rev){
        printf("%d is a palindrome number.",temp);
    }
    else{
       printf("%d is not a palindrome number.",temp); 
    }
}