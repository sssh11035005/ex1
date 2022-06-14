#include <iostream>
using namespace std;
int f(int n){
    if(n<=1){
        return 1;
    }
    return n*f(n-1);
}
int sum(int n){
    if(n<=1){
        return 1;}
        return n*sum(n-1);
}
int main(){
    int n=5;
    printf("%d!=%d\n",n,f(n));
    printf("sum %d=%d\n",n,sum(n));
    
    return 0;
}
