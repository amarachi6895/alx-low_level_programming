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
	int is_leap_year = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
	int day_of_year = convert_day(month, day);

	/* Adjust for leap year if the date is past February */
	if (is_leap_year && month > 2)
	{
	day_of_year++;
	}

	/* Print the day of the year and remaining days */
	if (month == 2 && day == 29 && !is_leap_year)
	{
	printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	}
	else
	{
	printf("Date: %02d/%02d/%04d\n", month, day, year);
	printf("Day of the year: %d\n", day_of_year);
	if (is_leap_year)
	{
	printf("Remaining days: %d\n", 366 - day_of_year);
        }
        else
        {
	printf("Remaining days: %d\n", 365 - day_of_year);
	}
	}
}
