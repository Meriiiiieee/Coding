#include <stdio.h>

int swap(int *a, int *b) {
    int temp = 0;
    temp = *a; 
    *a = *b;    
    *b = temp; 
    return 0;
}

int main() {
    int a = 0;
    int b = 0;
    
    printf("Enter the value of a: ");
    scanf("%d", &a);
    
    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Befor swap a=%d, b=%d\n", a, b);

    swap(&a, &b);

    printf("After swap a=%d, b=%d\n", a, b);

    return 0;
}
