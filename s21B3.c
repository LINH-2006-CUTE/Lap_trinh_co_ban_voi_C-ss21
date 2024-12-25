#include<stdio.h>


int main() {
FILE *fptr;
    fptr = fopen("bt01.txt", "a");
    char text[100];
    printf("Nhap chuoi ghi them: ");
    fgets(text, sizeof(text), stdin);
    fprintf(fptr, "%s", text);
    fclose(fptr);
    
	return 0;
}

