#include <stdio.h>

char kata[100];

int jumlah(char var[]){
	int i;
	int *p;
	p = &i;
	*p = 0;
	
	while(var[*p] != '\0'){
		i++;
	}
	return *p;
}

int main(){
	printf("Masukkan Nama	: ");
	scanf("%[^\n]s", &kata);
	printf("Jumlah Karakter	: %d", jumlah(kata));
return 0;
}
