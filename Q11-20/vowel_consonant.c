#include<stdio.h>
#include <ctype.h>
#include<stdbool.h>
bool isVowel(char c)
    {
        char c1=tolower(c);
        if(c1=='a' || c1=='e'|| c1=='i'|| c1=='o'|| c1=='u')
            return true;
        return false;
    }
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int count1=0,count2=0;
    char a[n];
    printf("Enter elements of the array: \n");
    for(int i=0;i<n;i++){
        scanf(" %c",&a[i]);
        if(isVowel(a[i]))
            count1++;
        else
            count2++;    
    }
    printf("The number of vowels are %d\n",count1);
    printf("The number of consonants are %d\n",count2);
    return 0;
}
