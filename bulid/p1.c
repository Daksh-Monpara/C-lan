#include <stdio.h>

int main() {
    char password[100];
    int hasLetter = 0, hasDigit = 0, hasSpecial = 0, length = 0;
    int i;
     
    printf("Create your password: ");
    scanf("%s", password);

    
    for ( i = 0; password[i]!= '\0'; i++) {
        length++;

        
        if (isalpha(password[i])) {
            hasLetter = 1;
        }
        
        else if (isdigit(password[i])) {
            hasDigit = 1;
        }
        
        else if (!isalnum(password[i])) {
            hasSpecial = 1;
        }
    }

    if (length >= 6 && hasLetter && hasDigit && hasSpecial) {
        printf("Your password is Strong.\n");
    } else {
        printf("Your password is not Strong.\n");
    }
}
