#include <stdio.h>

	int CountNumber(int n, int s)
	{
	    int c=0,a;
    
	    while(n>0)
	    {
	        a=n%10;
	        n=n/10;
        
	        if(a==s)
        	    c++;
	    }
    
  	    printf("%d",c);
    
   	    return 0;
	}

	int main()
	{
    		int n,s;
    
    		printf("\nEnter the number : ");
    		scanf("%d",&n);
    
    		printf("\nEnter digit to search: ");
    		scanf("%d",&s);
    
    		CountNumber(n,s);
    
    		return 0;
	}