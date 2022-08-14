#include <stdio.h>
#include <string.h>

void main(){
	int pilih, i, pilihan_anda, show;
	char nim[10];
	char nama[50];
	char kelas[50];
	char dosen[50];
	
	printf("Sistem Pendataan Akun I-Lab Infotech\n\n");
	printf("=== Pilihan Menu ===\n\n");
	printf("1.	Create Data\n");
	printf("2.	Show Data\n");
	printf("3.	Update Data\n");
	printf("4.	Delete Data\n");
	printf("5.	Search Data\n");
	printf("6.	Exit\n");
	
	printf("\nMasukkan Data yang ingin di input : ");
	scanf("%d", &pilih);
	
	for(i=1; i<=pilih; i++){
		printf("\nMasukkan Pilihan : ", i);
		scanf("%d", &pilihan_anda);
		
	switch(pilihan_anda){
		case 1:
			printf("==== Create Data ====\n\n");
			printf("Input NIM Praktikan\t\t: ");
			scanf("\n%s", nim);
			printf("Input Nama Praktikan\t\t: ");
			scanf("%s", nama);
			fflush(stdin);
			printf("Input Kelas Pemograman Dasar\t: ");
			scanf("%[^\n]s", kelas);
			printf("Input Nama Dosen Pengampu\t: ");
			scanf("%s", dosen);
			break;
		case 2:
			printf("==== Show Data ====\n\n");
			while(show)
			
				
		}
	}
}
