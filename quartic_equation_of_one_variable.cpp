#include <stdio.h>
#include <math.h>

int var(int v)
	{
		return pow(v,4)+pow(v,2)*2+v+4;
		  
	}
int main()
{
	int i,c[5],v,f(v);
	for(i=0;i<5;i++) 
	{
		printf("Please enter the coefficients of the %d terms in the equation: ",i);
		scanf("%d",&c[i]);	
	}
	printf("Please enter the variable value to be calculated: ");
	scanf("%d",&v);
	printf("f(%d)=%d",v,var(v));
 } 
 
 
 
