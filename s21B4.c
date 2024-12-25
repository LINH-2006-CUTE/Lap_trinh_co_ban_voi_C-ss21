#include<stdio.h>


int main() {

    FILE *fptr = fopen("bt01.txt", "r");
	char str[100];
	fgets(str, 100, fptr);
	printf("\nDong dau tien: %s", str);
	fclose(fptr);

    
	return 0;
}

