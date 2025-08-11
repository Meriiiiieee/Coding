#include <stdio.h>
#define SIZE 5

int main() {
    int arr[SIZE];
    int arr1[SIZE];

    printf("Enter the elements: ");
    for(int i = 0; i <SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the elements: ");
    for(int i = 0; i<SIZE; i++) {
        scanf("%d", &arr1[i]);
    }

    for(int i = 0; i< SIZE; i++) {
       int product = arr[i] * arr1[i];
       printf(" %d", product);
    }   
    
    return 0;
}  
