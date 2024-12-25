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
    while (fscanf(fptr, "%d,%99[^,],%d", &sv[count].id, sv[count].name, &sv[count].age) == 3) { // "==3" kiem tra so luong doc thanh cong 
        count++;
    } // "%d,%99[^,],%d": doc ki tu den khi gap dau "," (ten co  khoang trang)
	
    fclose(fptr);
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < count; i++){
        printf("ID: %d, Ten: %s, Tuoi: %d\n", sv[i].id, sv[i].name, sv[i].age);
    }

    return 0;
}
