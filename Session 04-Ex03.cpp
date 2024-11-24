#include <stdio.h>

int main() {
    // Moi ban nhap vao 1 so nguyen 
    int number;
    printf("Moi ban nhap vao 1 so nguyen: ");
    scanf("%d", &number);
    
    if (number % 3 == 0 && number % 5 == 0) {
        printf("So ban vua nhap chia het cho ca 3 va 5\n");
        
    } else if (number % 3 == 0) {
        printf("So ban vua nhap chia het cho 3\n");
        
    } else if (number % 5 == 0) {
        printf("So ban vua nhap chia het cho 5\n");
        
    } else {
        printf("So ban vua nhap khong chia het cho 3 hoac 5\n");
        
    }

    return 0;
}

