#include "main.h"
#include <stdio.h>

/**
 * times_table-function prints nine times the number from 0 to 9 with increment
*/
int main(void)
{
	int sum = 0, i;
	for (i = 0; i < 1024; i++){
	if ( i% 3== 0)
	sum += i;
	if(i % 5 == 0)
	sum += i;
	}
	printf("%d\n",sum);
	return 0;
}
