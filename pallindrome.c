#include<stdio.h>
#include<string.h>


int main()
{
    char a[20],b[20];
    
    printf("\nEnter the string you want to check: ");
    gets(a);
    
    strcpy(b,a);
    strrev(b);
    
    if(strcmp(b,a)!=0)
        printf("\nString is not pallindrome");
    else
        printf("\nString is pallindrome");
    
    
    return 0;
}