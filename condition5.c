#include <stdio.h>

int main(){
	int angka, kelipatan4, kelipatan5, pilih, Y, y;
	
	printf("Masukkan angka : ");
	scanf("%d", &angka);
	
	kelipatan4 = angka / 4;
	kelipatan5 = angka / 5;
	
	if(pilih=='Y' || pilih=='y'){
		printf("Angka Valid");
	}else{
		printf("Angka tidak Valid");
	}
return 0;
}
