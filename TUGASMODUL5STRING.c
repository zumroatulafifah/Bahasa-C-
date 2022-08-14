#include <stdio.h>
#include <string.h>

int view=0, data, pilih=0, update, ganti;
char nim[100];
char nama[100];
char kelas[100];
char dosen[100];

void create_data();
void show_data();
void update_data();
void delete_data();
void search_data();

void create_data(){
	view+=1;
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
}

void show_data(){
	system("cls");
    if(view<1){
        printf("Mohon Inputkan Data Anda Terlebih Dahulu....\n\n");
    }else{
	    data=1;
	        while(data<=view){
	        printf("=== %d ===\n\n",data);
			printf("NIM Praktikan\t\t: %s\n", nim);
			printf("Nama Praktikan\t	: %s\n", nama);
			printf("Kelas Progdas\t	: %s\n", kelas);
			printf("Nama Dosen\t	: %s\n\n", dosen);
			data++;
        }
    }
}
  
void update_data(){
	printf("Masukkan NIM Praktikan yang ingin di Update Data nya	: ");
	scanf("%s", update);
	data=1;
	ganti=0;
	while(data<=view && ganti==0){
		if(strcmp(update, nama)==0){
			ganti++;
		}
	data++;
	}
	if(ganti<1){
		printf("Data yang ingin di Update belum di Inputkan...");
	}else{
		data--;
		printf("Nama Baru Praktikan		: ");
		scanf("%s", nama);
		printf("Kelas Baru Progdas	: ");
		scanf("%s", kelas);
		printf("Dosen Pengampu Baru	: ");
		scanf("%s", dosen);	
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
