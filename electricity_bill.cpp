#include<stdio.h> 
int main()
{
	int num,elec,bill,CH,CHB;
	printf(" 1.Home electricity \n 2.Industrial electricity \n 3.Commercial electricity \n");
	printf("Please enter the electricity consumption category <1~3>:");
	scanf("%d",&num);
	printf("Electricity consumption :");
	scanf("%d",&elec);
	if(num==1)
	{
		if(elec>=301)
		{
			bill=elec*4;
		}
		else if(elec>=101)
		{
			bill=elec*3;
		}
		else
		{
			bill=elec*2;
		}
		printf("The total electricity bill is $ %d",bill);
	}
	else if(num==2)
	{
		printf("Contract Horsepower =");
		scanf("%d",&CH);
		CHB=CH*200;
		bill=elec*2;
		printf("The total electricity bill is $ %d",CHB+bill);	
	}	
	else if(num==3)
	{
		if(elec>=301)
		{
			bill=elec*6;
		}
		else
		{
			bill=elec*5;
		}
		printf("The total electricity bill is $ %d",bill);
	}
	else
	{
		printf("Your enter is wrong.");	
	}
	return 0;	
}
