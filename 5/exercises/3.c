#include <stdio.h>
#include <limits.h>
#include <errno.h>

/* Fix the remaining bug in the absolute_value function in Listing
   5-14. */

int absolute_value(int a);

int main(void) {
    printf("%i\n", absolute_value(-2147483647));
    printf("%i\n", absolute_value(-2147483648)); // too big for a positive
    return 0;
}

int absolute_value(int a) {
    if (a < 0)
	if (a == INT_MIN)
	    return -1;
	else return a;
    return a;
}

/* 
Alternative: (thanks D.)

int absolute_value(int a) {
    if (a < 0) a = -a;
    if (a < 0) return -1;
    return a;
}
*/
