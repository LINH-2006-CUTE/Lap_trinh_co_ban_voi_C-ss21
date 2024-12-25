#include<stdio.h>


int main() {
FILE *fptr = fopen("bt01.txt", "r");
	int kitu= fgetc(fptr);
	printf("%c", kitu);
	fclose(fptr);

    
	return 0;
}

