#include <stdio.h>

int main (){
	// Yeu cau nguoi dung nhap thang
	int number;
	printf("Moi ban nhap thang muon kiem tra :");
	scanf("%d", &number);
	if ( number == 1){
		printf("Thang 1 co 31 ngay\n");
	}else if ( number == 2){
		printf("Thang 2 co 28 ngay\n");
	}else if ( number == 3){
		printf(" Thang 3 co 31 ngay\n");
	}else if ( number == 4){
		printf(" Thang 4 co 30 ngay\n");
	}else if ( number == 5){
		printf(" Thang 5 co 31 ngay\n");
	}else if ( number == 6){
		printf("Thang 6 co 30 ngay\n");
	}else if ( number == 7){
		printf("Thang 7 co 31 ngay\n");
	}else if ( number == 8){
		printf("Thang 8 co 31 ngay\n");
	}else if ( number == 9){
		printf("Thang 9 co 30 ngay\n");
	}else if ( number == 10){
		printf("Thang 10 co 31 ngay\n");
	}else if ( number == 11){
		printf("Thang 11 co 30 ngay\n");
	}else if ( number == 12){
		printf("Thang 12 co 31 ngay\n");
	}else {
		printf("Thang  ban vua nhap khong hop le.Hay nhap thang tu 1 den 12 de kiem tra \n");
	}
	return 0;
}
