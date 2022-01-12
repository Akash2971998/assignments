#include<stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10], r1,c1,r2,c2,i,j,k,sum=0;
    
    printf("\nEnter rows and columns of 1st matrix: ");
    scanf("%d%d",&r1,&c1);
    
    printf("\nEnter elemets of 1st matrix: ");
    
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
            
        }
    }
    
    printf("\nElements are: ");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",a[i][j]);
            
        }
    }
    
   
    printf("\nEnter rows and columns of 2nd matrix: ");
    scanf("%d%d",&r2,&c2);
    
    printf("\nEnter elemets of 2nd matrix: ");
    
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
            
        }
    }
    
    printf("\nElements are: ");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",b[i][j]);
            
        }
    }
    
    
    
    if(c1!=r2)
        printf("\n Multiplication is not possible");
    else
    {
        printf("\nMultiple of Matrix is: ");    
        
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                c[i][j]=0;
                
                for(k=0;k<r2;k++)
                {
                    sum=sum+a[i][k]*b[k][j];
                }
                c[i][j]=sum;
                sum=0;
            }
        }
        
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",c[i][j]);
            }
        }
    }
    
    
    
    
}