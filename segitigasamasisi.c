#include <stdio.h>

int main(){
	
	int n;
	
	printf("Masukkan Jumlah Pola Bintang : ");
	scanf("%d", &n);
	
	int i;
	for(i=1; i<=n; i++){
		int j;
		for(j=n; j>i; j--){
			printf(" ");
		}
		int k;
		for(k=1; k<= (2*i - 1); k++){
			printf("*");
		}
			printf("\n");
	}
return 0;	
}

// Nama 	: ZUMRO'ATUL AFIFAH
// NIM		: 099
