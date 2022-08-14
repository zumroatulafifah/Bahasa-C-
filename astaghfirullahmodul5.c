#include <stdio.h>
#include <string.h>

int main(){
	
int i=0, j, k, pilih=0, baru;
char hapus[100];
char update[100];
char search[100];
char nama[100][100];
char nim[100][100];
char kelas[100][100];
char dosen[100][100];

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
		i+=1;
		system("cls");
		atas:
		printf("=== Create Data ===\n\n");
		printf("Input NIM Praktikan\t\t: "); 
		scanf("%s", nim[i]);
		fflush(stdin);
		if(pilih != 0){
			for(baru=0; baru<i; baru++){
				if(strcmp(nim[i],nim[baru])==0){
					printf("NIM Praktikan Sudah Ada...\n\n");
					i--;
					goto atas;
			}
		}
	}
	printf("Input Nama Praktikan\t\t: ");
	scanf("%[^\n]s", nama[i]);
	fflush(stdin);
	printf("Input Kelas Pemograman Dasar\t: ");
	scanf("%[^\n]s", kelas[i]);
	fflush(stdin);	
	printf("Input Nama Dosen Pengampu\t: ");
	scanf("%[^\n]s", dosen[i]);
	fflush(stdin);
	printf("------------------------------------------\n\n");
	printf("\t Data Berhasil ditambah \t\n\n");
	printf("------------------------------------------\n");
	break;
	case 2:
		system("cls");
    	if(i<1){
        printf("Mohon Inputkan Data Praktikan Terlebih Dahulu....\n\n");
    	}else{
	    	j=1;
			while(j<=i){
				printf("=== List Data ===\n");
		        printf("=== %d ===\n\n",j);
				printf("NIM Praktikan\t\t: %s\n", nim[j]);
			  	printf("Nama Praktikan\t\t: %s\n",nama[j]);
				printf("Kelas Progdas\t	: %s\n", kelas[j]);
				printf("Nama Dosen\t	: %s\n\n", dosen[j]);
				printf("------------------------------------------\n");	
		j++;
        }
    }
}




return 0;
}
