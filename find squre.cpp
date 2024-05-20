#include<stdio.h>
int main()
	{
		int a,b,c,d,e;
		
		
		printf("enter a number");
		scanf("%d",&a);
		
		b = a*a;
		c =a*a*a;
		d = b*b;
		e = d*a;
		printf("square = %d\n", b);
		printf("cube = %d\n",c);
		printf("fourth power = %d\n",d);
		printf("fifth power = %d",e);
		
	}
