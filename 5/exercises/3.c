#include <stdio.h>
#include <limits.h>

/* Fix the remaining bug in the absolute_value function in Listing
   5-14. */

int absolute_value(int a);

int main(void) {
    printf("%i\n", absolute_value(-2147483648));
    return 0;
}

int absolute_value(int a) {
    if (a < 0) {
	if (a == INT_MIN)
	    return -(a+1);
	else
	    return -a;
    }
    return a;
}
