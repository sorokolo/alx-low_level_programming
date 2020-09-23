#include "holberton.h"
/**
 * jack_bauer - print hours
 * time1: hour 1
 * time2: hour 2
 * time3: minute 1
 * time4: minute 2
 * Description:
 */
void jack_bauer(void)
{
	int time1;
	int time2;
	int time3;
	int time4;

	for (time1 = 0; time1 <= 2; time1++)
	{
		if (time1 == 2 && time2 == 4)
		{
			break;
		}
		for (time2 = 0; time2 <= 9; time2++)
		{
			if (time1 == 2 && time2 == 4)
			{
				break;
			}
			for (time3 = 0; time3 <= 5; time3++)
			{
				if (time1 == 2 && time2 == 4)
				{
					break;
				}
				for (time4 = 0; time4 <= 9; time4++)
				{
					if (time1 == 2 && time2 == 4)
					{
						break;
					}
					_putchar(time1 + '0');
					_putchar(time2 + '0');
					_putchar(':');
					_putchar(time3 + '0');
					_putchar(time4 + '0');
					_putchar('\n');
				}
			}
		}
	}

}
