#include <iostream>
int main()
{
    int     i;
    double  f;
    float   f1;
    char    s[30];
    char     s1='c';
    #if 0
    printf(" please input a integer \n");
    scanf("%d",&i);
    printf(" your input integer= %d\n",i);
    
    printf(" please input a float number \n");
    scanf("%1lf",&f);
    printf(" your input float number = %1lf\n",f);
    
    printf(" please input a string \n");
    scanf("%s",s);
    printf(" your input string = %s\n",s);
    #endif
    printf(" char display = %c\n",s1);
    printf(" char display = %x\n",s1);
    
    return 0;
}
