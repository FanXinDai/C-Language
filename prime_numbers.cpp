#include <stdio.h> 
int main()
{
	for(int i=2;i<=100;i++)
	{
		int is_prime=1;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				is_prime=0;
				break;
			}	
		}
		
		if(is_prime==1)
		{
			printf("%d is prime number \n",i);
		}
	}
	
}

