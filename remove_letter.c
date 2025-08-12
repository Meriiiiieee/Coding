#include <stdio.h>

int main() {
    
    char str[]= "Happy";
    char c ='0'; 
    int write= 0;
    printf("%s\n", str);
    printf("Enter the letter: ");
    scanf("%c", &c);
    
    for(int read = 0; str[read]!='\0'; read++){
        if(str[read] != c) {
            str[write]=str[read];
            write++;
        }
        
    }
    str[write]= '\0';
    printf("After remove '%c'  %s\n", c, str);
    return 0; 
}
