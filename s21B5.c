#include <stdio.h>

int main(){
    FILE *fptr;
    int numLine;
    char line[100];
    printf("Nhap so dong: ");
    scanf("%d", &numLine);
    getchar();
    fptr = fopen("bt05.txt", "w");
    for (int i = 0; i < numLine; i++){
        printf("Nhap noi dung cho dong %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        fprintf(fptr, "%s", line);
    }
    fclose(fptr);
    
    
    fptr = fopen("bt05.txt", "r");
    
    printf("\nNoi dung file bt05.txt:\n");
    for (int i = 0; i < numLine; i++){
        if (fgets(line, sizeof(line), fptr) != 0){
            printf("%s", line);
        }
    }
    fclose(fptr);

    return 0;
}
