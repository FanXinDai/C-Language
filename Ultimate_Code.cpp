#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{ 
	srand(time(NULL));
	int ans=rand()%10000+1;
	int i,num;
	int left=1;
	int right=10000;
	for(i=0;i<=10000;i++)
	{
		
		printf("Guess a number between %d and %d: \n",left,right);
		scanf("%d",&num);
			
		if(num<left||num>right)
		{
			printf("error\n");
			continue;
		}
		else if(num<ans)
		{
			left=num+1;
		}
		else if(num>ans)
		{
			right=num-1;
		}
		else if(num==ans)
		{
			printf("You guessed correctly.");
			break;
		}
	}
} 
