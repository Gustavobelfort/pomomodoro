#include <time.h>
#include <stdio.h>
#include "../includes/text_color.h"
void	current_time(void)
{
	time_t	curtime;

	time(&curtime);
	printf("current time is:" GREEN "%s", ctime(&curtime));
}
