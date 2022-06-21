/****
int a[5] = {1,2,3};
int a[5] = {1,2,3,4,5,6};
int a[] = {1,2,3,4,5};
****/
#include <stdio.h>
int main(){
    int i,arr[6] = { 1, 2, 3, 4, 7, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Number of elements:%lu", sizeof(arr) / sizeof(arr[0]));
    for(i = 0 ; i<n ; i++){
        printf("%d \n",arr[i]);
    }
    
    return 0;
}
