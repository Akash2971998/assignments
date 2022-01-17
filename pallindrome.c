#include <string.h>
#include<stdlib.h>
 
int main()
{
    char s[20];  
    int i,n,count=0;
 
    printf("Enter  the string : ");
    gets(s);
    n=strlen(s);
 
    for(i=0;i<n/2;i++)  
    {
    	if(s[i]==s[n-i-1])
    	count++;
   	}
  
 	  if(count==i)
 	    printf("string is palindrome");
    else
      printf("string is not palindrome");
 	      
    return 0;
}
