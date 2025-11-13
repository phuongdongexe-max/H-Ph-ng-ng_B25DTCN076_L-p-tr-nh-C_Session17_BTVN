#include <stdio.h>
#include <string.h>

int main (){
	char arr[100];
	int i, choice;
	printf ("Menu: \n");
	printf ("1, In ra chuoi da nhap thanh in hoa.\n");
	printf ("2, In ra chuoi da nhap la in thuong.\n");
	do {
		printf("Nhap vao mot chuoi: ");
    fgets(arr, 100, stdin);
    arr[strcspn(arr, "\n")] = '\0';
    int len = strlen(arr);
    printf ("Nhap lua chon cua ban: ");
    scanf ("%d", &choice);
    switch (choice){
    	case 1:
    		for (i = 0; i < len; i++) {
        		if (arr[i] >= 'a' && arr[i] <= 'z') {
        		arr[i] = arr[i] - 32;
        		}
    		}
    		break;
    		case 2:
    		for (i = 0; i < len; i++) {
       			if (arr[i] >= 'A' && arr[i] <= 'Z') {
        			arr[i] = arr[i] + 32;
        		}
			}
			break;
}
} while (choice !=2);
return 0;
}
