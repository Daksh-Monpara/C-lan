#include <stdio.h>

int main() {
    char name[100];
    int sum = 0;
    int i;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("\nOutput:\n");

    for ( i = 0; i < strlen(name); i++) {
        printf("ASCII Value of %c is %d\n", name[i], name[i]);
        sum += name[i];
    }

    printf("Sum is = %d\n", sum);

}

