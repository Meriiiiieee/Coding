#include <stdio.h>
#define SIZE 5 

int main() {
    char arr[SIZE];

    printf("Enter the elements: ");
    for(int i = 0; i< SIZE; i++) {
        scanf("%c", &arr[i]);
    }

    for(int i = 0; i<SIZE; i++) {
        if ( arr[i] >= '0' && arr[i]<='9'){
            printf("%c", arr[i]);
        }
    }

    return 0;
}   
