#include <stdio.h>
#include <string.h>
int main() {
    char arr[100];
    int len, i;
    int real = 0;
    int maxLen = 0;
    int start = 0;
    int maxStart = 0;
    printf("1. Nhap vao mot chuoi: ");
    fgets(arr, 100, stdin);
    arr[strcspn(arr, "\n")] = '\0';
    len = strlen(arr);
    for (i = 0; i <= len; i++) {
        if (arr[i] == ' ' || arr[i] == '\0') {
            if (real > maxLen) {
                maxLen = real;
                maxStart = start;
            }
            real = 0;
        } else {
            if (real == 0) {
                start = i;
            }
            real++;
        }
    }
    printf("Tu dai nhat la: ");
    for (i = 0; i < maxLen; i++) {
        printf("%c", arr[maxStart + i]);
    }
    printf("\nDo dai cua tu: %d\n", maxLen);
    return 0;
}
