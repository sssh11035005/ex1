#include <stdio.h>
int addNumbers (int a, int b);	// function prototype
int subNumbers (int a, int b);
int timesNumbers (int a, int b);
int moveNumbers(int a, int b);
int
main ()
{
  int n1, n2, sum;
  printf ("Enters two numbers: ");
  scanf ("%d", &n1);
  scanf ("%d", &n2);
  sum = addNumbers (n1, n2);	// function call
  printf ("sum = %d \n", sum);

  sum = subNumbers (n1, n2);	// function call
  printf ("sub = %d \n", sum);

  sum = timesNumbers (n1, n2);	// function call
  printf ("times = %d \n", sum);
  
  sum = moveNumbers (n1, n2);	// function call
  printf ("move = %d \n", sum);

  return 0;
}
int addNumbers (int a, int b)	// function definition   
{
  int result;
  result = a + b;
  return result;
  //return statement
}
int subNumbers (int a, int b)	// function definition   
{
  int result;
  result = (a > b) ? (a - b) : (b - a);
  return result;
  //return statement
}
int timesNumbers (int a, int b)	// function definition   
{
  int result;
  result = a * b;
  return result;
  //return statement
}
int moveNumbers (int a, int b)	// function definition   
{
  int result;
  result = a / b;
  return result;
  //return statement
}