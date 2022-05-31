#include <iostream>
using namespace std;
int main()
{
    int x,y;
    printf("請輸入你的年齡:\n");
    scanf("%d",&x);
    printf("請輸入你朋友的年齡:\n");
    scanf("%d",&y);
    
    if (x>y){
        printf("%d",x); }
    else{
        printf("%d",y); }

    return 0;
}