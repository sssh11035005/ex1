#include <iostream>
using namespace std;
int main()
{
    int x,y,z;
    printf("please input:\n");
    scanf("%d",&x);
    printf("please input:\n");
    scanf("%d",&y);
    printf("please input:\n");
    scanf("%d",&z);
    
    if ((x+y) == z){
        printf("right"); }
    else{
        printf("error"); }

    return 0;
}