#include <stdio.h>

int main() {
    // M?i b?n nh?p m?t s? nguyên
    int number;
    printf("Moi ban nhap vao 1 so nguyen: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("So ban vua nhap la so duong\n");
    } else if (number < 0) {
        printf("So ban vua nhap la so am\n");
    } else {
        printf("So ban vua nhap la so 0\n");
    }

    return 0;
}

