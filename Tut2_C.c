#include<stdio.h>

int main()
{
   int a,b=0;
   printf("enter a number\n");
   scanf("%d",&a); //scanf is a keyword used to take user input.

do //this is do while loop.
{
  printf("%d\n",b); //loops are basically used to do same task multiple times.
  b = b + 1;  
} while (b<=a); //in this while we write the condition to which the progrma will be performed.


    return 0;
}