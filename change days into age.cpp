#include<stdio.h>
main()
	{
		int day,month,year,age_in_days;
		age_in_days = 4564;
		year =	age_in_days/365;
		age_in_days = age_in_days %365;
		month = age_in_days/30;
		day = age_in_days%30;
		
		printf("years = %d",year);
		printf("\nmonths = %d",month);
		printf("\ndays = %d",day);
		
	}
