#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int r,y,z;
    printf("please input r:\n");
    scanf("%d",&r);
    
    if (r >= 0){
        y=((r*r)*3.14);
        z=((2*r)*3.14);
        printf("%d \n",y);
        printf("%d",z);}
    else {
        printf("輸入有誤請再次檢查");}
        
    return 0;
}
