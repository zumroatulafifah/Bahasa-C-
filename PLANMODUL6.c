#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int i=0, j, k, pilih=0, baru;
char hapus[100], update[100], search[100], nama[100][100], nama2[100][100], nim[100][100], kelas[100][100], dosen[100][100];
 
int create_data();
void show_data();
int update_data();
void delete_data();
void search_data(); 

FILE *data, *data1;

int main(){
	data = fopen("Data_Mahasiswa.txt", "r");
	if(data!=NULL){
		while(!feof(data)){
			fscanf(data, "%s\n%s\n%s\n%s\n", &nim[i], &nama[i], &kelas[i], &dosen[i]);
			i++;
		}
		fclose(data);
	}
	while(pilih !=6){
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
	}
return 0;
}

int create_data(){
    i+=1;
    system("cls");
	printf("=== Create Data ===\n\n");
	printf("PASTIKAN NIM PRAKTIKAN DI ISI 17 KARAKTER\n\n");
	printf("Input NIM Praktikan\t\t: "); 
	scanf("%s", nim[i]);
	fflush(stdin);
	printf("\n");
	if(pilih != 0){
		for(baru=0; baru<i; baru++){
			if(strcmp(nim[i],nim[baru])==0){
				printf("NIM Praktikan Sudah Ada, Silahkan Inputkan NIM Praktikan yang Berbeda...\n\n");
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
	printf("------------------------------------------\n\n");
	printf("\t Data Berhasil ditambah \t\n\n");
	printf("------------------------------------------\n");
}
 
void show_data(){
	system("cls");
    if(i<1){
        printf("Mohon Inputkan Data Praktikan Terlebih Dahulu....\n\n");
    }else{
    	data = fopen ("Data_Mahasiswa.txt", "a");
    	fprintf(data, "%s\n%s\n%s\n%s\n\n", nim[i],nama[i],kelas[i],dosen[i]);
    	fclose(data);
    	printf("------------------------------------------\n\n");
		printf("\t Data Mahasiswa telah ditambahkan \t\n\n");
		printf("------------------------------------------\n");
	}	 
}

int update_data(){
	FILE *lama, *baru;
	lama = fopen ("Data_Mahasiswa.txt", "r");
	baru = fopen ("Data_Baru_Mahasiswa.txt", "w");
	
	system("cls");
	printf("=== Update Data ===\n\n");
    printf("Masukkan NIM Praktikan yang ingin di update: ");
    scanf("%s",update);
    j=1;
    k=0;
    while(fscanf(lama, "%s\n%s\n%s\n%s\n\n", nim[j],nama[j],kelas[j],dosen[j])!=EOF){
    	while(j<=i && k==0){
        if(strcmp(update,nim[j])==0){
        	k++;
        }
        j++;
    	}if(k<1){
       		printf("\nMohon Inputkan Data Praktikan Terlebih Dahulu....\n\n"); 
    	}else{
        	j--;
	        printf("\nNIM Praktikan\t\t: %s\n", nim[j]);
			printf("Nama Praktikan\t	: %s\n", nama[j]);
			printf("Kelas Progdas\t	: %s\n", kelas[j]);
			printf("Nama Dosen\t	: %s\n", dosen[j]);
			printf("------------------------------------------\n\n");
			printf("Nama Praktikan Baru\t: "); fflush(stdin);
			scanf("%[^\n]s", nama[j]); 
			printf("NIM Baru Praktikan\t: "); fflush(stdin);
			scanf("%s", nim[j]);
				if(strlen(nim[j])<17){
					printf("\nNIM Praktikan harus di isi 17 Karakter...\n\n");
					j--;
					return main();
				}if(strlen(nim[j])>17){
					printf("\nNIM yang di inputkan Melebihi Batas Maksimal..\n\n");
					j--;
					return main();
				}
				printf("Kelas Progdas Praktikan\t: "); fflush(stdin);
				scanf("%[^\n]s", kelas[j]); 
				printf("Dosen Pengampu Praktikan: "); fflush(stdin);
				scanf("%[^\n]s", dosen[j]);
				fprintf(baru, "%s\n%s\n%s\n%s\n\n", nim[j], nama[j], kelas[j], dosen[j]);
				printf("\n------------------------------------------\n\n");
				printf("\t Data Berhasil di Update \t\n\n");
				printf("------------------------------------------\n");
		}	
		fclose(lama);
		fclose(baru);
		remove("Data_Mahasiswa.txt");
		rename("Data_Baru_Mahasiswa.txt", "Data_Mahasiswa.txt");
	}
    
}

void delete_data(){
	system("cls");
	printf("=== Delete Data ===\n\n");
    printf("Masukkan NIM Praktikan yang ingin di Delete :  ");
    scanf("%s",hapus);
    j=1;
    k=0;
    while(j<=i && k==0){
        if(strcmp(hapus,nim[j])==0){
            k++;
        }
        j++;
    }
    if(k<1){
        printf("\nData yang Akan Anda Delete Mungkin Tidak Ada...\n\n");
    }else{
        j--;
        printf("-----------------------------------------------------\n\n");
		printf("\t Data %s Berhasil di Hapus \t\n\n", nama[j]);
		printf("-----------------------------------------------------\n");
        while(j<=i){
            strcpy(nama[j],nama[j+1]);
            strcpy(nim[j],nim[j+1]);
            strcpy(kelas[j],kelas[j+1]);
            strcpy(dosen[j],dosen[j+1]);
            j++;
        }
		j++;
		strcpy(nim[j], " ");
		i--;
    }
}


void search_data(){
	system("cls");
	printf("=== Search Data ===\n\n");
    printf("Masukkan NIM Praktikan yang ingin di Cari: ");
    scanf("%s",search);
    j=1;
    k=0;
    while(j<=i && k==0){
        if(strcmp(search,nim[j])==0){
            k++;
        }
        j++;
    }
    if(k<1){
       printf("Data Sudah Terhapus, Mohon Inputkan Data Baru lagi....\n\n"); 
    }else{
        j--;
        printf("NIM Praktikan\t\t: %s\n", nim[j]);
		printf("Nama Praktikan\t	: %s\n", nama[j]);
		printf("Kelas Progdas\t	: %s\n", kelas[j]);
		printf("Nama Dosen\t	: %s\n\n", dosen[j]);
    }
}



