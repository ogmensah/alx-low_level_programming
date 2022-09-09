#include <stdio.h> 

/**
 * write - this function runs first before any other
 * @filedes: this parameter is used by the write function
 * @*buf: this is also used by the write funciton
 * @nbyte: this specifies the amount of memory
(*
 * Return: 0 if program runs successfully
 */


int write(int filedes, const char *buf, unsigned int nbyte); 

/**
 * main - this function runs first before any other
 * @argc: this parameter is used by the write function
 * @argv: this is also used by the write funciton
(*
 * Return: 0 if program runs successfully
 */

int main( int argc, char** argv ) 
{ 
   write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60); 

   return 0; 
} 
