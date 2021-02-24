#include <stdio.h>

static unsigned int counter = 0;

unsigned int retrieve(void) {
    return counter;
}

void increment(void) {
    counter++;
    printf("%d ", retrieve());
}

int main(void) {
    for (int i = 0; i < 5; i++) {
	increment();
    }
    return 0;
}
