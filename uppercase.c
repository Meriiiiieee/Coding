#include <stdio.h>

int main() {
    char symbol = 0;

    printf("Enter the string: ");
    scanf("%c" , &symbol);

    if (symbol >= 'a' && symbol <= 'z') {
        symbol -=32;
        printf("%c", symbol);
    }

    return 0;
}    
