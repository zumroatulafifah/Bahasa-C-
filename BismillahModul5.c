#include <stdio.h>
#include <string.h>

int i=0, j, k, pilih=0;
char nim[100][100];
char nama[100][100];
char kelas[100][100];
char dosen[100][100];
char update[100][100];

void create_data();
void show_data();
void update_data();
void delete_data();
void search_data();

void create_data(){
	i+=1;
	system("cls");
	printf("=== Create Data ===\n\n");
	printf("Input NIM Praktikan\t\t: ");
	scanf("%s", nim);
	printf("Input Nama Praktikan\t\t: ");
	scanf("%s", nama);
	fflush(stdin);
	printf("Input Kelas Pemograman Dasar\t: ");
	scanf("%[^\n]s", kelas);
	printf("Input Nama Dosen Pengampu\t: ");
	scanf("%s", dosen);
	printf("------------------------------------------\n\n");
	printf("\t Data Berhasil ditambah \t\n\n");
	printf("------------------------------------------\n\n");
	
}

void show_data(){
	system("cls");
    if(i<1){
        printf("Mohon Inputkan Data Praktikan Terlebih Dahulu....\n\n");
    }else{
	    j=1;
		while(j<=i){
	        printf("=== %d ===\n\n",j);
			printf("NIM Praktikan\t\t: %s\n", nim);
			printf("Nama Praktikan\t	: %s\n", nama);
			printf("Kelas Progdas\t	: %s\n", kelas);
			printf("Nama Dosen\t	: %s\n\n", dosen);
		j++;
        }
    }
}

void update_data(){
	printf("Masukkan NIM Praktikan yang ingin di update	: ");
	scanf("%s", update);
	k=0;
	j=1;
	while(j<=i && k==0){
		if(strcmp(update,nim)==0){
			printf("NIM Praktikan\t\t: %s\n", nim);
			printf("Nama Praktikan\t	: %s\n", nama);
			printf("Kelas Progdas\t	: %s\n", kelas);
			printf("Nama Dosen\t	: %s\n\n", dosen);
			printf("--------------------------------------\n\n");
			printf("Nama Praktikan Baru\t\t: ");
			scanf("%s", nama);
			printf("Kelas Progdas Praktikan\t: ");
			scanf("%s", kelas);
			printf("Dosen Pengampu Praktikan\t: ");
			scanf("%s", dosen);
		j++;
		}
	k++;
	}
}


int main(){
	while(pilih !=3){
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
		}
	}
return 0;
}


