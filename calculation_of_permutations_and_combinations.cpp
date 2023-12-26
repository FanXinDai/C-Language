#include <stdio.h>
int c(int n,int r)
{
	if(n==r)
	{
		return 1;
	}
	else if(n==0||r==0)
	{
		return 1;
	}
	else
	{
		return c(n-1,r)+c(n-1,r-1);
	}
}
int main()
{
	int n,r;
	printf("Calculate the combination C ,please input n and r:");
	scanf("%d%d",&n,&r);
	printf("c(%d,%d)=%d",n,r,c(n,r));
	
 } 
