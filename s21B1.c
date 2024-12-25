#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("bt01.txt", "w");
    char text[50];
    printf("Nhap chuoi: ");
    scanf("%s", text);
    fprintf(fptr, "Hien thi: ");
    fputs(text, fptr);
    fclose(fptr);

    return 0;
}
