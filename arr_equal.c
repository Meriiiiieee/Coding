#include <stdio.h>
#define SIZE 5

int equal(int arr[], int arr1[], int size) {
    for (int i = 0; i<SIZE; i++) {
        if ( arr[i] != arr1[i] ) {
            printf("Arrays is not equal: ");
            return 0;
         } 
    }
    printf("Arrays is equal: ");
    return 0;
} 


int main() {
    
    int arr[SIZE];
    int arr1[SIZE];
 
    printf("enter the elemnts: ");
    for(int i = 0; i<SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the elemnts: ");
    for(int i = 0; i<SIZE; i++) {
        scanf("%d", &arr1[i]);
    }

     equal(arr, arr1, SIZE);
 return 0;
}
