#include <stdio.h>
#include <string.h>

void main(){
	char nama [10];
	printf("Masukkan Nama ");
	scanf("%s[^\n]", nama);
	printf("Panjang nama %d", strlen(nama));
}
