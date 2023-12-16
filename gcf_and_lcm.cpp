#include <stdio.h>
int main()
{
	int on1,on2,i,num1,num2,lcm=1,total=1;
	printf("Please enter two positive integers:");
	scanf("%d%d",&num1,&num2);
	on1=num1;
	on2=num2;
	for(i=2;i<=num1&&i<=num2;i++)
	{
		if(num1%i==0 && num2%i==0)
		{
			num1=num1/i;
			num2=num2/i;
			total=total*i;
			i--;
		
		}		
	}
	lcm=total*num1*num2;
	printf("The greatest common factor of %d and %d is: %d \n ",on1,on2,total);
	printf("The least common multiple of %d and %d is: %d ",on1,on2,lcm);		
	
 } 
