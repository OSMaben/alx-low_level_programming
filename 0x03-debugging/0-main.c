#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - intery point
 *
 * @i: this parameter takes diff value each time
 * the program is excuted
 * Description: this fucntion returns the either
 * a pos or nig value
 *
*/

void positive_or_negative(int i)
{

srand(time(0));
i = rand() - RAND_MAX / 2;

if (i > 0)
printf("%i is positive\n", i);
else if (i == 0)
printf("%i is zero\n", i);
else
printf("%i is negative\n", i);

}
