#include<stdio.h>
int main()
{
	int num,i,grade,maxi=-100,mini=100;
	printf("Please enter the number of students in the class :");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("Please enter the grade for student number %d :",i);
		scanf("%d",&grade);
		if(grade>maxi)
		{
			maxi=grade;
		}
		if(grade<mini)
		{
			mini=grade;
		}
		
	}
	printf("The highest score is %d points \n The lowest score is %d points",maxi,mini);
 } 
