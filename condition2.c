#include <stdio.h>

int main(){
	float tinggi;
	
	printf("Masukkan tinggi air : ");
	scanf("%f", &tinggi);
	
	if(tinggi > 650){
		printf("status SIAGA 1\n");
	}else if(tinggi > 600.1 && tinggi <= 650.0){
		printf("status SIAGA 2\n");
	}else if(tinggi > 500.1 && tinggi <= 600.0){
		printf("status WASPADA\n");
	}else if(tinggi <= 500.0){
		printf("status AMAN\n");
	}else{
		printf("status TIDAK ADA\n");
	}
return 0;
}
