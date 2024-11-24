#include <stdio.h>

int main(){
	// Moi ban nhap vao 1 so nguyen
    int number;
    printf("Moi ban nhap vao 1 so nguyen :");
    scanf("%d", & number);
    
    if ( number % 2 == 0 ){
    	printf("So ban vua nhap la so chan\n");
	}
	else{
		printf("So ban vua nhap la so le\n");
	}
	return 0;
}
