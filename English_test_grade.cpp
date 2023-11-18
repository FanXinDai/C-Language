#include<stdio.h>
int main()
{
	int grade1,grade2,total;
	scanf("%d %d",&grade1,&grade2);
	total=grade1+grade2;
	if((grade1>=80||grade2>=80) && total>=150)
	{
		printf("Congratulations on passing the English test.");
	}
		
	else 
	{
		printf("Failed this English test.");
	}
		
	return 0;		
 } 
