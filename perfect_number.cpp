#include <stdio.h>
int main()
{
	int i,j;
	for(i=2;i<=10000;i++)
	{
		int total=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				total=total+j;
			}	
		}
		if(total==i)
			{
				printf("%d is a perfect number. \n",total);
			}
	}
	return 0;
 } 
