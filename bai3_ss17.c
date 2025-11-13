#include <stdio.h>
#include <string.h>

int main() {
    char Array1[100];
    char Array2[50];
    printf("Nhap vao chuoi thu nhat: ");
    fgets(Array1, sizeof(Array1), stdin);
    printf("Nhap vao chuoi thu hai: ");
    fgets(Array2, sizeof(Array2), stdin);
    Array1[strcspn(Array1, "\n")] = '\0';
    Array2[strcspn(Array2, "\n")] = '\0';
    strcat(Array1, Array2);
    printf("Chuoi sau khi noi: %s\n", Array1);
    return 0;
}
