#include <stdio.h>

int main() {
    // Khai bao bien de kiem tra nam
    int year;

    // Yeu cau nguoi dung nhap nam
    printf("Moi ban nhap nam: ");
    scanf("%d", &year);

    // Kiem tra nam nhuan
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Nam %d la nam nhuan.\n", year);
    } else {
        printf("Nam %d khong phai la nam nhuan.\n", year);
    }

    return 0;
}

