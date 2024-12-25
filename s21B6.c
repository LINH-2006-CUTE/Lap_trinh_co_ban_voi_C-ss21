#include<stdio.h>


int main() {
    char kitu ;
	FILE *fptr1, *fptr6 ;
	fptr1 = fopen("bt01.txt", "r");
	fptr6 = fopen("bt06.txt", "w");
	while (1) {
		kitu = fgetc(fptr1);
		if (kitu == EOF) {
	        break; 
	    }
        fputc(kitu, fptr6);
    }
	
	fclose(fptr1);
	fclose(fptr6);
    
	return 0;
}

