#include<stdio.h>
int main()
{
	int i,n,e=0;
	printf("enter the value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		e=e+i;
	}
	printf("sum of even series:%d",e);
	return 0;
}