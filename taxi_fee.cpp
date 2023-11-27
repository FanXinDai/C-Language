#include <stdio.h>
int main()
{
	int meters,k,dollar=70,d;
	printf("Please enter the mileage <unit is meters> : ");
	scanf("%d",&meters);
	if(meters>1500)
	{
		k=meters-1500;
		k=k-1;
		k=k/500;
		k=k+1;
		d=k*5;
	
	printf("The total price is NT$ %d " ,dollar+d);
	}
	else
	{
		printf("The total price is NT$ %d " ,dollar);	
	}
	return 0;
 } 
