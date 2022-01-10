#include <stdio.h>

	int main()
	{
    		int n,i,r,sum;
    
    		printf("\nEnter number to check perfect number: ");
    		scanf("%d",&n);
    
    		sum=0;
    
    		for(i=1;i<n;i++)
    		{
        		r=n%i;
        
        		if(r==0)
            		sum=sum+i;
    		}
    
    		if(sum!=n)
   		   	printf("\n It is not a perfect a number.");
    
    		else
        		printf("\n It is perfect number.");
        

    		return 0;
	}