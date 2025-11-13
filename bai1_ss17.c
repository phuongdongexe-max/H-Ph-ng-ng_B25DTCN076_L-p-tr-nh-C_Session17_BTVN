#include <stdio.h>
#include <string.h>

int main (){
	printf("Nhap vao mot chuoi: ");
	char arr[30];
    fgets(arr, 30, stdin);
    int i, j;
	int flag = 1;
    arr[strcspn(arr, "\n")] = '\0';
    int len = strlen(arr);
    for (i=0; i < len /2 ; i++){
		if (arr[i] != arr[len -1 - i] ) {
  		flag =0;
		}
	}
		if (flag = 1){
			printf ("Day la chuoi palindrome");
		} else {
			printf ("Day khong phai chuoi palidrome");
		}
	return 0;
}









