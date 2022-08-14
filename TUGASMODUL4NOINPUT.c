#include <stdio.h>

int main(){
	int boruto[3] = {85, 90, 86};
	int sarada[3] = {84, 90, 89};
	int i;
	
	printf("Nilai Boruto :\n");
	for(i=0; i<3; i++){
		printf("Ujian Progdas ke-%d : %d\n", i+1, boruto[i]);
		
	}
	printf("Nilai Sarada :\n");
	for(i=0; i<3; i++){
		printf("Ujian progdas ke-%d : %d\n", i+1, sarada[i]);
	}
	
	printf("\nRekap perbandingan nilai boruto dan sarada :\n");
	for(i=0; i<3; i++){
		if(boruto[i]>sarada[i]){
			printf("Hasilnya adalah : 1\n");
		}if(sarada[i] >= boruto[i]){
			printf("Hasilnya adalah : 0\n");
		}
	}
return 0;
}
