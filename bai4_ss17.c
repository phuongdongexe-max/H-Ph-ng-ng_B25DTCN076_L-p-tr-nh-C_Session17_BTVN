#include <stdio.h>
#include <string.h>
int main() {
    char arr[100];
    char remove;
    int i, j = 0;
    printf("1. Nhap vao mot chuoi: ");
    fgets(arr, 100, stdin);
    arr[strcspn(arr, "\n")] = '\0';
    printf("2. Nhap ky tu can xoa: ");
    scanf(" %c", &remove);
    int len = strlen(arr);
    for ( i = 0; i < len; i++) {
        if (arr[i] != remove) {
            arr[j] = arr[i];
            j++;
        }
    }
    arr[j] = '\0';
    printf("Sau khi xoa %c -> %s\n", remove, arr);
    return 0;
}
