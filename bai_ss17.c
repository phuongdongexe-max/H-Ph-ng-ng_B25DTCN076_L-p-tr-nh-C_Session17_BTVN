#include <stdio.h>
#include <string.h>
int main() {
    char pass[100];
    int lenpass = 0;
    int Word = 0;
    int word = 0;
    int number = 0;
    int dif = 0;
    int i;
    printf("1. Nhap vao mat khau: ");
    fgets(pass, 100, stdin);
    pass[strcspn(pass, "\n")] = '\0';
    int len = strlen(pass);
    if (len >= 8) {
        lenpass = 1;
    }
    for (i = 0; i < len; i++) {
        if (pass[i] >= 'A' && pass[i] <= 'Z') {
            Word = 1;
        } else if (pass[i] >= 'a' && pass[i] <= 'z') {
            word = 1;
        } else if (pass[i] >= '0' && pass[i] <= '9') {
            number = 1;
        } else {
            dif = 1;
        }
    }
    if (lenpass == 1 && Word == 1 && word == 1 && number == 1 && dif == 1) {
        printf("Hop le\n");
    } else {
        printf("Khong hop le\n");
    }
    return 0;
}
