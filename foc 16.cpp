#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("\nenter a first number:");
	scanf("%d",&a);
	printf("\nenter a second number:");
	scanf("%d",&b);
	
	temp=a;
	a=b;
	b=temp;
	printf("\nafter swap first number=%d",a);
	printf("\nafter swap second number=%d",b);
	return 0;
}