#include <stdio.h>

int main(){
	char array[9] = {"Indonesia"};
	char a;
	int i, cari =0;
	
	printf("Karakter yang ingin dicari : ");
	scanf("%c", &a);
	
	for(i=0; i<9; i++){
		if(a==array[i]){
			cari=1;
		}	
	}
	if(cari==1){
		printf("\nKarakter a ADA");
	}else{
		printf("\nKarakter a TIDAK ADA");
	}
	
return 0;
}
