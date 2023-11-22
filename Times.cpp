#include <stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,s1,s2,s3,s4,s5,total,total_1,total_2;
	scanf("%d %d",&m1,&s1);
	scanf("%d %d",&m2,&s2);
	scanf("%d %d",&m3,&s3);
	scanf("%d %d",&m4,&s4);
	scanf("%d %d",&m5,&s5);
	total_1=m1+m2+m3+m4+m5;
	total_2=s1+s2+s3+s4+s5;
	total=total_2/60;
	total_2=total_2%60;
	total_1=total_1+total;
	printf("%d : %d",total_1,total_2);
	return 0;
} 
