#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,s=0;
	float avg;
	printf("enter a value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+i;
		avg=s/n;
	}
	printf("\nsum of given numbers =%d",s);
	printf("\naverage of given numbers=%f",avg);
	return 0;
}