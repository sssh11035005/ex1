#include <iostream>
using namespace std;
void print_array(int* p,int n){
    int i,n1 = sizeof(p) / sizeof(int);
    printf(" in function, array size n = %d \n",n1);
    for(i=0;i<n;i++){
        printf("%d , ",p[i]);
        //printf("%d , ",*(p+1));
    }
    printf("\n");
}
int main(){
    int a[]={9,10,6,3,2};
    int n = sizeof(p) / sizeof(int);
    int*p = a;
    printf(" array size n = %d \n",n);
    print_array(p,n);
    
    return 0;
}
