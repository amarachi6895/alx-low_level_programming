#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int day_of_year;
	/* Convert the month and day to day of the year */
	day_of_year = convert_day(month, day);

	/* Check if the year is a leap year */
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
	/* Leap year */

	if (month > 2)
	{
	day_of_year++;
	}
	if (day > 29 && month == 2)
	{
	printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	}
	else
	{
	printf("Day of the year: %d\n", day_of_year);
	printf("Remaining days: %d\n", 366 - day_of_year);
	}
	}
	else
	{
	/* Not a leap year */
	if (month == 2 && day > 28)
	{
	printf("Invalid date: %2d/%02d/%04d\n", month, day, year);
	}
	else
	{
	printf("Day of the year: %d\n", day_of_year);
	printf("Remaining days: %d\n", 365 - day_of_year);
	}
	}
}
