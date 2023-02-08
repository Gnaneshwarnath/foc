#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,s=0;
	printf("enter the value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s+=i*i*i;
	}
	printf("%d",s);
	return 0;
}