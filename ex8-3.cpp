#include <iostream>
using namespace std;
int main(){
    int b=0  ,c=39;
    int a[]={3,6,1,2,7};
    int*p;
    int i,n =sizeof(a)/sizeof(int);
    
    printf("please b number \n");
    scanf("%d",&b);
    printf("  b= %d \n",b);
    printf(" &b= %x \n",&b);
    printf("  n= %d \n",n);
    
    p=&b;
    printf("  b= %d \n",*p);
    printf(" &b= %x \n",p);
    
    printf("a[0]=%d \n",a[0]);
    printf("a[1]=%d \n",a[1]);
    printf("&a[0]=%x \n",&a[0]);
    printf("&a[0]=%x \n",a);
    p=a;
    for(i=0;i<n;i++){
        printf("a[%d]=%d \n",i,*(p+i));
        printf("a[%d]=%d \n",i,p[i]);
    }
    
    return 0;
}
