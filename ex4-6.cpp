#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int x,y,z;
    int bool_value;
    
    printf("please input x:\n");
    scanf("%d",&x);
    printf("please input y:\n");
    scanf("%d",&y);
    
    if (x>y){
         printf("x>y ==> %d \n" ,x>y);}
    else if(x<y){
        printf("x<y ==> %d \n" ,x<y);}
    else {
        printf("x == y \n");}
    z=(x>y)? x:y;
    printf("z= %d \n",z);
    return 0;
}
