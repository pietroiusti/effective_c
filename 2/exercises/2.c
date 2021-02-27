#include <stdio.h>

/* Declare an array of three pointers to functions and invoke the
 * appropriate function based on an index value passed in as an
 * argument. */

void hello(void);
void hola(void);
void ciao(void);

void (*f[3]) (void);

void call_funcion(int i);


int main(void)
{
 f[0] = hello;
 f[1] = hola;
 f[2] = ciao;

 for (int i = 0; i < 3; i++)
     call_funcion(i);

 return 0;
}

void hello(void) { printf("hello\n"); };
void hola(void) { printf("hola\n"); };
void ciao(void) { printf("ciao\n"); };
void call_funcion(int i) {
    f[i](); // or: (*(f+i))();
}
