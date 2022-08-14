#include <stdio.h>

int main(){
	int matriks1[2][2], matriks2[3][3];
	// i untuk baris dan j untuk kolom
	int pilih_ordo, i,j;
	int max = 0;
	int min = 100;
	
	atas:
	printf("Pilih ordo matriks, 2x2 maka 2 atau 3x3 maka 3 : ");
	scanf("%d", &pilih_ordo);
	
	switch(pilih_ordo){
		case 2:
			printf("\nMasukkan angka dalam matriks 1: \n");
			for(i=0; i<2; i++){
				for(j=0; j<2; j++){
					printf("Masukkan angka pada indeks [%d][%d] : ", i,j);
					scanf("%d", &matriks1[i][j]);
				}
			}
			printf("\nData Matriks 1:\n");
			for(i=0; i<2; i++){
				for(j=0; j<2; j++){
					printf("%d\t", matriks1[i][j]);
					if(matriks1[i][j]>max){
						max = matriks1[i][j];
					}
					if(matriks1[i][j]<min){
						min = matriks1[i][j];
					}
				}
				printf("\n");
			}
			printf("\nBiggest : %d", max);
			printf("\tSmallest : %d", min);
			break;
		case 3:
			printf("\nMasukkan angka dalam matriks 2: \n");
			for(i=0; i<3; i++){
				for(j=0; j<3; j++){
					printf("Masukkan angka pada indeks [%d][%d] : ", i,j);
					scanf("%d", &matriks2[i][j]);
				}
			}
			printf("\nData Matriks 2:\n");
			for(i=0; i<3; i++){
				for(j=0; j<3; j++){
					printf("%d\t", matriks2[i][j]);
					if(matriks2[i][j]>max){
						max = matriks2[i][j];
					}
					if(matriks2[i][j]<min){
						min = matriks2[i][j];
					}
				}
				printf("\n");
			}
			printf("\nBiggest : %d", max);
			printf("\tSmallest : %d", min);
			break;	
		default:
			printf("\nMatriks Tidak sesuai format, silahkan sesuaikan matriks..\n\n");
			goto atas;	
	}
return 0;	
}
