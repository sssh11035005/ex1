#include <stdio.h>
int addNumbers(int a, int b); // function prototype
int main()
{
    int n1,n2,sum;
    printf("Enters two numbers: ");
    scanf("%d",&n1);
    scanf("%d",&n2);
    sum = addNumbers(n1, n2);  // function call
    printf("sum = %d \n",sum);
    
    return 0;
}
int addNumbers(int a, int b)         // function definition   
{
    int result;
    result = (a*b);
    return result;                     
    //return statement
}