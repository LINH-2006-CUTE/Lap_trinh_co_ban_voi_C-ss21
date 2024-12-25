#include<stdio.h>
struct SinhVien {
    int id;
    char name[50];
    int age;
};

int main() {
    FILE *fptr;
    int numSinhVien;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &numSinhVien);
    getchar();
    struct SinhVien sv[100];
    for (int i = 0; i < numSinhVien; i++) {
        printf("Nhap thong tin cho sinh vien %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &sv[i].id);
        getchar();
        printf("Ten: ");
        fgets(sv[i].name, sizeof(sv[i].name), stdin);
        printf("Tuoi: ");
        scanf("%d", &sv[i].age);
        getchar();
    }
    fptr = fopen("students.txt", "w");
    for (int i = 0; i < numSinhVien; i++) {
        fprintf(fptr,"\t %d,%s,%d ", sv[i].id, sv[i].name, sv[i].age);
    }
    fclose(fptr);
    
    
	return 0;
}

