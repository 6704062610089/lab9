#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkLogin(char *login, char *passwd);
int checkValidPass(char *ps);

int main() {
    char login[64], password[64];

    printf("Enter login : ");
    fgets(login, sizeof(login), stdin);
    login[strcspn(login, "\n")] = 0;

    printf("Enter password : ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = 0;

    if (checkLogin(login, password) == 1) {
        printf("Welcome\n");
    } else {
        printf("Incorrect login or password\n");
    }

    if (checkValidPass(password)) {
        printf("Accepted\n");
    } else {
        printf("Reject\n");
    }

    return 0;
}

int checkValidPass(char *ps) {

    int len = strlen(ps);
    int digitCount = 0;
    int upperCount = 0;
    int upperUsed[26] = {0};
    int repeatUpper = 0;

    for (int i = 0; i < len; i++) {
        if (isdigit(ps[i]))
            digitCount++;

        if (isupper(ps[i])) {
            upperCount++;

            if (upperUsed[ps[i] - 'A'] == 1)
                repeatUpper = 1;

            upperUsed[ps[i] - 'A'] = 1;
        }
    }

  
    if (len == 5 && digitCount >= 1)
        return 1;

    
    if (len >= 5 && len <= 8 &&
        !isdigit(ps[0]) &&
        upperCount >= 2 &&
        digitCount >= 2)
        return 1;

    
    if (len >= 5 && len <= 8 &&
        upperCount >= 2 &&
        digitCount >= 2 &&
        repeatUpper == 0)
        return 1;

    return 0;
}

int checkLogin(char *login, char *passwd) {
    if (!strcmp(login, "student1") && !strcmp(passwd, "mypass"))
        return 1;
    else
        return 0;
}