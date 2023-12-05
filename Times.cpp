#include <stdio.h>
int main()
{
	int i,j,hour,minute,total_h=0,total_m=0;
	
	for(i=1;i<=5;i++)
	{
		scanf("%d %d",&hour,&minute);
		total_h=total_h+hour;
		total_m=total_m+minute;                                           
	} 
	hour=total_m/60;
	minute=total_m%60;	
	hour=hour+total_h;
	printf("%d : %d",hour,minute);  
	return 0;
} 
