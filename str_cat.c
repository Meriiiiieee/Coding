#include <stdio.h>

void str_cat( char *dest,  char *source ) {
    while(*dest!=0){
        dest++;
    }
    while( *source!='\0') {
        *dest = *source;
        dest++;
        source++;
}
*dest = '\0';
}

int main() {
    char str[20] = "Hi";
    char str1[]= "Mery";
    str_cat(str, str1);
    printf("%s\n", str);
    return 0;

}
