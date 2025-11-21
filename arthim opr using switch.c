#include<stdio.h>
void main()
{
	int a,b,c;
	int ch;
	printf("enter a and b values");
	scanf("%d%d",&a,&b);
	printf("menu\n");
	printf("1.add 2.sub 3.mul 4.div 5.rem");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:c=a+b;
		printf("sum of two no is %d",c);
		break;
		case 2:c=a-b;
		printf("sub of two no is %d",c);
		break;
		case 3:c=a*b;
		printf("mult of two no is %d",c);
		break;
		case 4:c=a/b;
		printf("div of two no is %d",c);
		break;
		case 5:c=a%b;
		printf("rem of two no is %d",c);
		break;
		defacult :printf("Invalid ch");
	}
}
