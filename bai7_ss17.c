#include <stdio.h>
#include <string.h>
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define RESET "\x1b[0m"
#include <stdlib.h>

int main() {
    char arrDad[100];
    char arrSon[100];
    printf("1. Nhap vao chuoi A: ");
    fgets(arrDad, 100, stdin);
    arrDad[strcspn(arrDad, "\n")] = '\0';
    printf("2. Nhap vao chuoi B: ");
    fgets(arrSon, 100, stdin);
    arrSon[strcspn(arrSon, "\n")] = '\0';
    char result = strstr(arrDad, arrSon);
    if (result != NULL) {
        printf("%s Co%s\n", GREEN , RESET);
    } else {
        printf("Khong\n");
    }
    return 0;
}
