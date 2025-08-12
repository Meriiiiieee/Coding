#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE];
    int temp = 0;
    int *i = arr;
    int *j = arr + SIZE - 1;
    printf("Enter the elemnts: ");
    for(int i = 0; i<SIZE; i++) {
        scanf("%d", arr + i);
    }
    
    while (i < j) {
        temp = *i;
        *i= *j;
        *j = temp;
        i++;
        j--;
    }
    
    printf("Reverse arrays: ");
    for(int i = 0; i<SIZE; i++){
        printf("%d", *(arr + i));
    }
    return 0;
}
