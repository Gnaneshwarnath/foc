#include<stdio.h>
int main()
{
	int n, b,d=0,bs=1,r;
	printf("enter a binary number:");
	scanf("%d",&n);
	b=n;
	while(n>0)
	{
		r=n%10;
		d=d+r*bs;
		n=n/10;
		bs=bs*2;
	}
	printf("the decimal value for given number:%d",d);
}
	