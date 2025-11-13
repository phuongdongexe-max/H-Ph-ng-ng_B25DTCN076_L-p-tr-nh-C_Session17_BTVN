#include <stdio.h>
#include <string.h>

int main (){
	printf("Nhap vao mot chuoi: ");
	char arr[30];
    fgets(arr, 30, stdin);
    int i, j;
    arr[strcspn(arr, "\n")] = '\0';
    int len = strlen(arr);
    for (i=0; i < len; i++){
    	for (j = len; j < 1; j--){
    		int cmp = strcmp(arr[i], arr[j]);
	if (cmp != 0) {
  		printf ("Khong phai la Palindrome.\n");
	} else {
		printf ("La chuoi Palindrome.\n");
		}
		}
	}
	return 0;
}








