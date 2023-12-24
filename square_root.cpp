#include <stdio.h>
#include <math.h>

int s(int num,int left,int right)
{
	int m=(left+right)/2;
	if(left==right)
	{
		return m;
	}
	else if(num>m*m)
	{
		return s(num,m+1,right);
	}
	else if(num<m*m)
	{
		return s(num,left,m);
	}
	else
	{
		return m;
	}
}
int SQRT(int num)
{
	int q=s(num,1,10000);
	int r=q-1;
	if(q*q-num<num-r*r)
	{
		return q;
	}
	else
	{
		return r;
	}
	
	
}
int main()
{
	int num;
	scanf("%d",&num);
	printf("%d",SQRT(num));
}

