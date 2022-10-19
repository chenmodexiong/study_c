#define  _CRT_SECURE_NO_WARNING 1
#include<stdio.h>
int is_leap_year(int i)
{
	for (i; i % 4 == 0 && i % 100 != 0 || i % 400 == 0; i++)
	{
		return 1;
	}
}
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (is_leap_year(year) == 1)
			printf("%d ", year);
	}
	return 0;
}

