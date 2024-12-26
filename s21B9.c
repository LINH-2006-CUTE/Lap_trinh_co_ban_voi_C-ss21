#include<stdio.h>
#include<string.h>
struct Book{
    int id;
    char name[50];
    char author[50];
    float price;
    char kind[50];
};
//1 
void inputBook(struct Book book[], int *n){
    printf("\nNhap so luong sach: ");
    scanf("%d", n);
    getchar();

    for (int i = 0; i < *n; i++){
        printf("\nNhap thong tin sach thu %d: ",i+1);
        printf("\nNhap ma sach: ");
        scanf("%d", &book[i].id);
        getchar();
        printf("Nhap ten sach: ");
        fgets(book[i].name,50, stdin);
        book[i].name[strlen(book[i].name)- 1] ='\0';
        printf("Nhap tac gia: ");
        fgets(book[i].author,50, stdin);
        book[i].author[strlen(book[i].author)-1] ='\0';
        printf("Nhap the loai: ");
        fgets(book[i].kind,50, stdin);
        book[i].kind[strlen(book[i].kind)-1] ='\0';
        printf("Nhap gia tien: ");
        scanf("%f", &book[i].price);
        getchar();
    }
}
//2 
void saveBook(struct Book book[], int n){
    FILE *fptr = fopen("ss21B9.bin", "wb");
    if (fptr == NULL) {
        printf("Khong the mo file de ghi!\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        fwrite(&book[i], sizeof(struct Book), 1, fptr);
    }
    fclose(fptr);
    printf("\nDa luu thanh cong!\n");
}
//3 
void getBook(struct Book book[], int *n) {
    FILE *fptr = fopen("ss21B9.bin", "rb");
    if (fptr == NULL) {
        printf("Khong the mo file de doc!\n");
        return;
    }
    int i = 0;
    while (fread(&book[i], sizeof(struct Book), 1,fptr)== 1){
        i++;
    }
    *n = i;
    fclose(fptr);
    printf("\nLay thong tin roi\n");
}
//4 
void showBook(struct Book book[], int n){
    printf("\nDanh sach sach: \n");
    for (int i = 0; i < n; i++) {
        printf("\nMa sach: %d", book[i].id);
        printf("\nTen sach: %s", book[i].name);
        printf("\nTac gia: %s", book[i].author);
        printf("\nThe loai: %s", book[i].kind);
        printf("\nGia tien: %.2f\n", book[i].price);
    }
}

int main() {
    struct Book book[100];
    int numBook = 0;
    int choice; 

    do {
        printf("\nTHUC DON\n");
        printf("1. Nhap so luong va thong tin sach\n");
        printf("2. Luu thong tin sach vao file\n");
        printf("3. Lay thong tin sach tu file\n");
        printf("4. Hien thi thong tin sach\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                inputBook(book, &numBook);
                break;
            case 2:
                saveBook(book, numBook);
                break;
            case 3:
                getBook(book, &numBook);
                break;
            case 4:
                showBook(book, numBook);
                break;
            case 5:
                printf("Thoat\n");
                break;
            default:
                printf(" nhap lai!\n");
        }
    } while (choice != 5);

    return 0;
}

