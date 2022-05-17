#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int y,x;
    printf("please input y:\n");
    scanf("%d",&y);
    x=(y%400);
    if (x==0){
        printf("是閏年");}
    else {
        printf("不是閏年");}
        
    return 0;
}
