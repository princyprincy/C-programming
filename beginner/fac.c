#include<stdio.h>
int factorial(int);
int main()
{
  int n;
  long fact;
  scanf("%d", &n); 
 
  if (n < 0)
    printf("Factorial of negative integers isn't defined.\n");
  else
  {
    fact = factorial(n);
    printf("%ld\n", fact);
  }
 return 0;
}
int factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorial(n-1));
}
