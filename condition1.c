#include <stdio.h>

int main(){
	int lampu;
	
	printf("Pilih angka saklar lampu : ");
	scanf("%d", &lampu);
	
	switch(lampu){
	case 0:
		printf("\nLampu Kondisi OFF\n");
		break;
	case 1:
		printf("\nLampu Kondisi ON\n");
		break;
	default:
		printf("\nLampu tidak menyala atau mati");	
	}
return 0;
}
