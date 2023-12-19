#include <stdio.h>
int main()
{
	int i=1,cnt=0,sum=0;
	while(i<=106)
	{
		cnt++;
		sum=sum+i;
		printf("i=%d sum=%d \n",i,sum);
		i=i+cnt;
	}
 } 
