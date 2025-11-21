#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("enter a and b values");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("after swaping a and b are %d\t%d",a,b);
}
