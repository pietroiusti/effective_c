#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
    FILE *fp;

    if ((fp = fopen("./written_file.txt", "wb")) == NULL) {
	fputs("Cannot open file\n", stderr);
	return -1;
    }

    for (int i = 0; i < 10000000; i++) {
	fwrite("0", 1, 1, fp);
    }

    fclose(fp);

    return 0;
}
