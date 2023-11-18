#include<stdio.h>
int main()
{
	int p1,p2,p3;
	scanf("%d %d %d",&p1,&p2,&p3);
	if((p1==5&&p2==0&&p3==0)||(p1==2&&p2==5&&p3==5)||(p1==0&&p2==2&&p3==2))
	{
		printf("people1 is win");
	}
	else if((p1==5&&p2==5&&p3==0)||(p1==2&&p2==2&&p3==5)||(p1==0&&p2==0&&p3==2))
	{
		printf("people1 & people2 are win");
	}
	else if((p1==5&&p2==0&&p3==5)||(p1==2&&p2==5&&p3==2)||(p1==0&&p2==2&&p3==0))
	{
		printf("people1 & people3 are win");
	}
	else if((p1==0&&p2==5&&p3==0)||(p1==5&&p2==2&&p3==5)||(p1==2&&p2==0&&p3==2))
	{
		printf("people2 is win");
	}
		
	else if((p1==0&&p2==5&&p3==5)||(p1==5&&p2==2&&p3==2)||(p1==2&&p2==0&&p3==0))
	{
		printf("people2 & people3 are win");
	}
	else if((p1==5&&p2==5&&p3==0)||(p1==2&&p2==2&&p3==5)||(p1==0&&p2==0&&p3==2))
	{
		printf("people1 & people2 are win");
	}
	else if((p1==0&&p2==0&&p3==5)||(p1==5&&p2==5&&p3==2)||(p1==2&&p2==2&&p3==0))
	{
		printf("people3 is win");	
		
	}
	else 
	{
		printf("They are tie~");
	}
	
	return 0;
}

