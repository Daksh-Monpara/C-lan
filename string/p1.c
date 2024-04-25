#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    printf("\nOutput:\n");

    printf("Uppercase string: ");
    for ( i = 0; i < strlen(str); i++) {
        printf("%c", toupper(str[i]));
    }

}

