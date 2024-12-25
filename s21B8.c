#include <stdio.h>

struct SinhVien {
    int id;
    char name[100];
    int age;
};

int main() {
    FILE *fptr;
    struct SinhVien sv[100];
    char line[100];
    int count = 0;
    fptr = fopen("students.txt", "r");
    while (fgets(line, sizeof(line), fptr) != EOF){
        if (line, "%d,%s,%d", &sv[count].id, sv[count].name, &sv[count].age!){
            count++;
            if (count > 100) {
                break;
            }
        }
    }
    fclose(fptr);
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < count; i++){
        printf("ID: %d, Ten: %s, Tuoi: %d\n", sv[i].id, sv[i].name, sv[i].age);
    }

    return 0;
}
