
#include<stdio.h>


 main()
{
	float inch,cm,fit;
	printf("enter the distance in inches :");
	scanf("%f",&inch);
	cm = inch * 2.54;
	fit = inch/12.0;
	printf("f inches = %f cm\n",inch,cm);
	printf("%f inches = %f feet\n",inch,fit);
}
