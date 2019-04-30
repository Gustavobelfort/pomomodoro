#include <stdio.h>
#include "includes/text_color.h"
#include "includes/time_scheduler.h"

int main(void)
{
	printf("%sred\n", RED);
	printf("%sgreen\n", GREEN);
	printf("%syellow\n", YELLOW);
	printf("%sblue\n", BLUE);
	printf("%smag\n", MAGENTA);
	printf("%sCYAN\n", CYAN);
	printf("%sWHITE\n", WHITE);
	current_time();
}
