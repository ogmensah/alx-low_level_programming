#include <stdio.h>
#ifndef _PUTCHAR
#define _PUTCHAR
/**
 *_putchar - this is a prototype for a function used in printing a character at a time
 *print_alphabet - this prints the alphabets from a to z
 *print_alphabet_x10 - this prints the alphabets from a to z 10 times
 *_islower - checks for lower letters
 *_isalpha - checks for alphabet
 */

int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
#endif /* _PUTCHAR */
