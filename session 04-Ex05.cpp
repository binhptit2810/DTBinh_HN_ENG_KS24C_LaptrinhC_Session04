#include <stdio.h>

int main(){
	// yeu cua nguoi dung nhap vao 3 so nguyen
	int firstNumber;
	int secondNumber;
	int thirdNumber;
	printf("Moi ban nhap so nguyen thu nhat :");
	scanf("%d",& firstNumber);
	printf("Moi ban nhap so nguyen thu hai");
	scanf("%d",& secondNumber);
	printf("Moi ban nhap so nguyen thu ba");
	scanf("%d",& thirdNumber);
	if ((thirdNumber > firstNumber && thirdNumber < secondNumber ) || ( thirdNumber > secondNumber && thirdNumber < firstNumber)) {
        printf("So thu ba (%d) nam trong khoang giua %d va %d.\n", thirdNumber, firstNumber, secondNumber);
    } else {
        printf("So thu ba (%d) khong nam trong khoang giua %d va %d.\n", thirdNumber, firstNumber, secondNumber);
    }

	return 0;
}
