#include <stdio.h>
int main(){
    int arr[] = { 1, 2, 3, 4, 7, 98};
    printf("Number of elements:%lu", sizeof(arr) / sizeof(arr[0]));
    printf("arr[%d] = %d \n",7,arr[7]);
    printf("arr[%d] = %d \n",9,arr[9]);
    printf("arr[%d] = %d \n",13,arr[13]);
    printf("arr[%d] = %d \n",16,arr[16]);
    
    return 0;
}
