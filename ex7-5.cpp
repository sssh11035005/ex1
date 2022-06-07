#include <stdio.h>
int addNumbers(int a); // function prototype
int main()
{
    int n1,n2,sum;
    printf("Enters degree C: ");
    scanf("%d",&n1);
    sum = addNumbers(n1);  // function call
    printf("degree F = %d",sum);
    
    return 0;
}
int addNumbers(int a)         // function definition   
{
    int result;
    //(a/100)(F-32/180)
    result = ((a/100)*180)+32;
    return result;                     
    //return statement
}
