#include <stdio.h>

int main(){
	char huruf;
	
	printf("Masukkan huruf : \n");
	scanf("%c", &huruf);
	
	if(huruf=='a' || huruf=='i' || huruf=='u' || huruf=='e' || huruf=='o'){
		printf("Huruf Vokal");
	}else{
		printf("Huruf Konsonan");
	}
return 0;
}
