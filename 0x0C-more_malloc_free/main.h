#include <stdio.h>
#ifndef _PUTCHAR
#define _PUTCHAR
/**
 *_putchar - this is a prototype for a function used in printing a character at a time
 */

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
int main(int argc, char *argv[]);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif /* _PUTCHAR */
