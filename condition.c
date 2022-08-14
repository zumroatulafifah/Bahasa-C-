#include <stdio.h>

int main(){
	int angka1;
	int angka2;
	
	printf("Masukkan angka 1 : ");
	scanf("%d", &angka1);
	printf("Masukkan angka 2 : ");
	scanf("%d", &angka2);
	
	if (angka1 > angka2){
		printf("Angka 1 lebih besar dari Angka 2");
	}
	else {
		printf("Angka 2 lebih besar dari Angka 1");
	}
return 0;
}
