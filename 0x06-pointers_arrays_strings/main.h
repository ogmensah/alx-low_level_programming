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
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);

#endif /* _PUTCHAR */
