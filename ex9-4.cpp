#include <stdio.h>
int main(){
    char a[] = "water";
    int i,n = sizeof(a) / sizeof(a[0]);
    printf("Number of elements:%lu", sizeof(a) / sizeof(a[0]));
    for(i = 0 ; i<n ; i++){
        printf("%d \n",a[i]);
    }

    return 0;
}
