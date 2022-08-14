#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int i=0, j, k, pilih=0, baru;
char hapus[100], update[100], search[100], nama[100], nama2[100], nim[100], kelas[100], dosen[100], cek;
 
int create_data();
void show_data();
int update_data();
void delete_data();
void search_data(); 

int main(){
	while(pilih!=6){
		printf("=== Pilihan Menu ===\n\n");
		printf("1.	Create Data\n");
		printf("2.	Show Data\n");
		printf("3.	Update Data\n");
		printf("4.	Delete Data\n");
		printf("5.	Search Data\n");
		printf("6.	Exit\n\n");
		
		printf("Masukkan Pilihan	: ");
		scanf("%d", &pilih);
		
		switch(pilih){
			case 1:
				create_data();
			break;
			case 2:
				show_data();
			break;	
			case 3:
				update_data();
			break;
			case 4:
				delete_data();
			break;
			case 5:
				search_data();
			break;
			default:
			printf("\nExit...\n\n");
	}
return 0;
}

int create_data(){
	FILE *data, *data1;
	data= fopen("Data_Mahasiswa.txt","a");
	system("cls");
		data1 = fopen ("Data_Mahasiswa.txt", "r");
		while(fscanf(data1, "%s\n%s\n%s\n%s\n", nim[i],nama[i],kelas[i],dosen[i])!=EOF)
		{
			i++;
		}
		fclose(data1);
		printf("=== Create Data ===\n\n");
		printf("PASTIKAN NIM PRAKTIKAN DI ISI 17 KARAKTER\n\n");
		printf("Input NIM Praktikan\t\t: ");
		scanf("%s", nim[i]);fflush stdin;
		printf("\n");
		if(pilih != 0){
		for(baru=0; baru<i; baru++){
			if(strcmp(nim[i],nim[baru])==0){
				printf("\nNIM Praktikan Sudah Ada, Silahkan Inputkan NIM Praktikan yang Berbeda...\n\n");
				i--;
				return main();
			}
		}
	}
	if(strlen(nim[i])<17){
		printf("NIM Kurang dari 17 Karakter...\n\n");
		i--;
		return main();
	}if(strlen(nim[i])>17){
		printf("NIM yang di inputkan Melebihi Batas Maksimal..\n\n");
		i--;
		return main();
	}
	printf("Input Nama Depan Praktikan\t: ");
	scanf("%[^\n]s", nama[i]); fflush(stdin);
	printf("\n");
	printf("Input Nama Belakang Praktikan\t: ");
	scanf("%[^\n]s", nama2[i]); fflush(stdin);
	printf("\n");
	strcat(nama[i],nama2[i]);
	printf("Nama Lengkap Praktikan\t\t: ");
	printf(nama[i]);
	printf("\n\n");
	printf("Input Kelas Pemograman Dasar\t: ");
	scanf("%[^\n]s", kelas[i]); fflush(stdin);
	printf("\n");
	printf("Konversi Kelas Menjadi Kapital\t: %s", strupr(kelas[i]));
	fflush(stdin);
	printf("\n\n");
	printf("Input Nama Dosen Pengampu\t: ");
	scanf("%[^\n]s", dosen[i]); fflush(stdin);
	fprintf(data, "%s\n%s\n%s\n%s\n", nim[i],nama[i],kelas[i],dosen[i]);
	fclose(data);
	printf("------------------------------------------\n\n");
	printf("\t Data Berhasil ditambah \t\n\n");
	printf("------------------------------------------\n");
		 
}
}
