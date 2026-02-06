#include<stdio.h>
int main(){
    int length=0;
    char str[100];
    printf("Enter the string: ");
    scanf("%s",str);
    while(str[length]!='\0'){
        length++;
    }
    printf("Length of string is %d",length);
}