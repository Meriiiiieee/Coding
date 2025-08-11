#include <stdio.h>
#define SIZE 5

int main() {
    int num = 0;
    int arr[SIZE];

    printf("Enter the elements: ");
    for(int i = 0; i<SIZE; i++) {
        scanf("%d", &arr[i]);
    } 

    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i = 0; i<SIZE; i++) {
        if ( num == arr[i] ){
            printf("Yes it contains: ");
            return 0;
        } 
    }    
            printf("It's not contain: ");
    return 0;
}
