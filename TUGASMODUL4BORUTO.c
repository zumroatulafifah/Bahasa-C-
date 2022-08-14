#include <stdio.h>
//boruto

int main(){
	
	int boruto[3];
	int sarada[3];
	int i;
	// menampilkan isi array dengan looping
	printf("Nilai Boruto :\n");
	for(i=0; i<3; i++){
		printf("Ujian Progdas ke-%d : ", i+1);
		scanf("%d", &boruto[i]);
	}
	printf("Nilai Sarada :\n");
	for(i=0; i<3; i++){
		printf("Ujian Progdas ke-%d : ", i+1);
		scanf("%d", &sarada[i]);
	}
	printf("\nRekap Nilai Perbandingan Boruto dan Sarada : \n");
	for(i=0; i<3; i++){
		if(boruto[i] > sarada[i]){
			printf("Hasilnya adalah : 1\n");
		}if(sarada[i] > boruto[i] || sarada[i] == boruto[i]){
			printf("Hasilnya adalah : 0\n");
		}
	}
return 0;	
}
