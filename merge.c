#include <stdio.h>
#define SIZE1 5
#define SIZE2 6

int main () {
    int arr[SIZE1];
    int arr1[SIZE2];
    int temp[SIZE1 + SIZE2];
    int i = 0;
    int j = 0;
    int m = 0;

    printf("Enter the elements: ");
    for(int i = 0; i<SIZE1; i++) {
        scanf("%d", &arr[i]);
    }

    printf("enter the elements: ");
    for(int j = 0; j<SIZE2; j++) {
        scanf("%d", &arr1[j]);
    }

    while (i<SIZE1 && j<SIZE2) {
        if ( arr[i] < arr1[j]) {
            temp[m++]= arr[i++];
        } else {
            temp[m++]=arr1[j++];
        } 
    }

    while(i<SIZE1) {
        temp[m++] = arr[i++];
    }

    while(j<SIZE2) {
        temp[m++]=arr1[j++];
    }    

        for (int m = 0; m < SIZE1 + SIZE2; m++) {
        printf("%d", temp[m]);
    }
return 0;
}
