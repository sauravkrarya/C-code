#include<stdio.h>
int checkPalindrome(int number)
{
  // declare variables
  int temp, remainder, rev=0;

  // copy of original number
  temp = number;

  // loop to repeat
  while( number!=0 )
  {
     // find last digit
     remainder = number % 10;

     // calculate reverse
     rev = rev*10 + remainder;

     // remove last digit
     number /= 10;
  }

  /* if reverse is equal to the
   * original number then it is a 
   * palindrome number else it is not.
   */
  if ( rev == temp ) return 0;
  else return 1;
}