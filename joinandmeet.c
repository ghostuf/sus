#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],join[100][100],meet[100][100],r,c,i,j;
	printf("Enter dimension(rows and columns) for matrix A and B: ");
	scanf("%d%d",&r,&c);
	printf("Enter Boolean matrix A: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("a[%d][%d]: ",i,j);
		scanf("%d",&a[i][j]);
	    }
    }
    printf("Enter Boolean matrix B: ");
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("b[%d][%d]: ",i,j);
		scanf("%d",&b[i][j]);
	    }
    }
    printf("The Boolean matrix A is:");
    printf("\n");
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("%d\t",a[i][j]);
	    }
	    printf("\n");
    }
	printf("The Boolean matrix B is:");
    printf("\n");
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("%d\t",b[i][j]);
	    }
	    printf("\n");
    }
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		join[i][j]=a[i][j]||b[i][j];
    		meet[i][j]=a[i][j]&&b[i][j];
		}
	}
    printf("The Join matrix is:\n");
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		printf("%d\t",join[i][j]);
		}
		printf("\n");
	}
	printf("The Meet matrix is:\n");
	for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		printf("%d\t",meet[i][j]);
		}
		printf("\n");
	}

  printf("This code is run by Arun Mainali.\n");
  return 0;    
}
