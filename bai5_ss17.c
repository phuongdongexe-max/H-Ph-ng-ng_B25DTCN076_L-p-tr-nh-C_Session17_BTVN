#include <stdio.h>
#include <string.h>
int main() {
    char a1[100];
    char a2[100];
    int i, dif = 0;
    printf("1. Nhap chuoi thu nhat: ");
    fgets(a1, 100, stdin);
    a1[strcspn(a1, "\n")] = '\0';
    printf("2. Nhap chuoi thu hai: ");
    fgets(a2, 100, stdin);
    a2[strcspn(a2, "\n")] = '\0';
    int len1 = strlen(a1);
    int len2 = strlen(a2);
    if (len1 != len2) {
        dif = 1;
    } else {
        for (i = 0; i < len1; i++) {
            char c1 = a1[i];
            char c2 = a2[i];
            if (c1 >= 'A' && c1 <= 'Z') {
                c1 = c1 + 32;
            }
            if (c2 >= 'A' && c2 <= 'Z') {
                c2 = c2 + 32;
            }
            if (c1 != c2) {
                dif = 1;
                break;
            }
        }
    }
    if (dif == 1) {
        printf("Khac nhau\n");
    } else {
        printf("Giong nhau\n");
    }
    return 0;
}
