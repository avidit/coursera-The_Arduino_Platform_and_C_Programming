/**
Write a program in C that computes and prints out the first six digits in the 
Fibonacci sequence. You will need to look up the definition of the Fibonacci 
sequence if you don't know it. The first two numbers in the sequence are 0 and 
1, but your program should compute the next four digits.
**/

#include<stdio.h>
 
int main()
{
   int n = 6, first = 0, second = 1, next, c;
 
   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      printf("%d\n",next);
   }
 
   return 0;
}