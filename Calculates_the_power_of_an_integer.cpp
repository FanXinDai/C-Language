#include <stdio.h>

int math(int X,int N)
{
	int i,total=1;
	for(i=1;i<=N;i++)
	{
		total=total*X;
	}
	return total;
}
int main()
{
	int X,N,i,total;
	printf("Computes X raised to the power N,please enter X & N:"); 
	scanf("%d %d",&X,&N);
	printf("%d ^ %d= %d ",X,N,math(X,N));
	return 0;
}

