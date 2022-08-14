#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int j, k, l, m, pilih;
char update[100], search[100], nama1[100], nama2[100], nama[100], nim[100], kelas[100], dosen[100], nim_kr[100], hapus[100];
 
int create_data();
int show_data(); 
int update_data();
int delete_data();
int search_data(); 

FILE *data, *data1;

int create_data(){
    system("cls");
    data = fopen ("Data_Akun_Mahasiswa.txt", "a");
    data1 = fopen ("Data_Akun_Mahasiswa.txt", "r");
    
	printf("=== Create Data ===\n\n");
	printf("PASTIKAN NIM PRAKTIKAN DI ISI 17 KARAKTER\n\n");
	printf("Input NIM Praktikan\t\t: "); 
	scanf("%s", nim_kr);
	fflush(stdin);
	printf("\n");
	
		for (j=0; j<2; j++){
            if(nim_kr[j]>= 65 && nim_kr[j]<= 90){
        	}
            else
            {
            	printf("NIM Praktikan tidak boleh ada Spesial Karakter dan huruf kecil...\n\n");
                fclose(data);
				fclose(data1);
                return main();
        	}
        }
        for (j=2; j<17; j++){
			if(nim_kr[j]>= 48 && nim_kr[j]<= 57){
			}
			else 
			{
	    		printf("NIM Praktikan kurang dari 17 karakter dan hanya boleh 2 huruf di depan angka...\n\n");
				fclose(data);
				fclose(data1);
				return main();
			}		
		}
		if(strlen(nim_kr)>17){
				printf("NIM yang di inputkan Melebihi Batas Maksimal..\n\n");
				fclose(data);
				fclose(data1);
				return main();
			}
  	
			
		while(fscanf(data1,"%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n\n\n", nim,nama,kelas,dosen)!=EOF)	
		{
			if(strcmp(nim,nim_kr)==0)
			{
				printf("NIM Praktikan sudah ada, Silahkan Inputkan NIM Praktikan yang berbeda...\n\n");
				fclose(data);
				fclose(data1);
				return main();	 
			}	
		}
	
		strcpy(nim, nim_kr);
		printf("Input Nama Depan Praktikan\t: ");
		scanf("%[^\n]s", nama1); fflush(stdin);
		printf("\n");
		printf("Input Nama Belakang Praktikan\t: ");
		scanf("%[^\n]s", nama2); fflush(stdin);
		printf("\n");
		strcpy(nama,nama1);
		strcat(nama, nama2);
		printf("Input Kelas Pemograman Dasar\t: ");
		scanf("%[^\n]s", kelas); fflush(stdin);
		printf("\n");
		printf("Input Nama Dosen Pengampu\t: ");
		scanf("%[^\n]s", dosen); fflush(stdin);
		fprintf(data, "%s\n", nim);
		fprintf(data, "%s\n", nama);
		fprintf(data, "%s\n", strupr(kelas));
		fprintf(data, "%s\n\n", dosen);
		printf("---------------------------------------------\n\n");
		printf("\t Data Berhasil ditambah \t\n\n");
		printf("---------------------------------------------\n");
		fclose(data);
		fclose(data1);
		return main();
}
 
int show_data(){
	system("cls");
    data1 = fopen ("Data_Akun_Mahasiswa.txt", "r");
 	printf("=== List Data ===\n");
		k=1;
		while(fscanf(data1,"%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n\n\n", nim, nama, kelas, dosen)!=EOF){
			l=1;
	        printf("=== %d ===\n\n",k); k++;
			printf("NIM Praktikan\t\t: %s\n", nim);
		  	printf("Nama Praktikan\t\t: %s\n",nama);
			printf("Kelas Progdas\t	: %s\n", kelas);
			printf("Nama Dosen\t	: %s\n", dosen);
			printf("------------------------------------------\n");	
		}
		if(l!=1){
			printf("\nAnda belum menginput data...\n\n");
		}
		fclose(data1);
		return main();
} 

int update_data(){
	FILE *lama, *baru;
	lama = fopen ("Data_Akun_Mahasiswa.txt","r");
	baru = fopen ("Data_Akun_Baru_Mahasiswa.txt", "w");
	
	system("cls");
	printf("=== Update Data ===\n\n");
    printf("Masukkan NIM Praktikan yang ingin di update: ");
    scanf("%s",update);
    m=0;
	while(fscanf(lama,"%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n\n\n", nim, nama, kelas, dosen)!=EOF){
				if(strcmp(update,nim)==0){
					m++;
				
				printf("\nInput NIM Baru Praktikan\t\t: "); 
				scanf("%s", nim);
				fflush(stdin);
				printf("\n");
				
				if(strlen(nim)>17){
					printf("NIM yang di inputkan Melebihi Batas Maksimal..\n\n");
					fclose(lama);
					fclose(baru);
					return main();
				}if(strlen(nim)<17){
					printf("NIM Praktikan harus di isi 17 Karakter...\n\n");
					fclose(lama);
					fclose(baru);
					return main();
				}
				
				printf("Input Nama Depan Praktikan Baru		: ");
				fflush(stdin);
				scanf("%[^\n]s", nama1);
				printf("\n");
				printf("Input Nama Belakang Praktikan Baru	: ");
				fflush(stdin);
				scanf("%[^\n]s", nama2);
				printf("\n");
				strcpy(nama,nama1);
				strcat(nama,nama2);
				printf("Input Kelas Baru Praktikan 	    	: ");
				fflush(stdin);
				scanf("%[^\n]s", kelas);
				printf("\n");
				printf("Input Nama Dosen Baru Praktikan		: ");
				fflush(stdin);
				scanf("%[^\n]s", dosen);
				fprintf(baru, "%s\n", nim);
				fprintf(baru, "%s\n", nama);
				fprintf(baru, "%s\n", strupr(kelas));
				fprintf(baru, "%s\n\n", dosen);
				printf("---------------------------------------------\n\n");
				printf("\t Data Berhasil di update \t\n\n");
				printf("---------------------------------------------\n");
				}
			else{
				fprintf(baru, "%s\n", nim);
				fprintf(baru, "%s\n", nama);
				fprintf(baru, "%s\n", strupr(kelas));
				fprintf(baru, "%s\n\n", dosen);
			}

		}
		fclose(lama);
		fclose(baru);
		remove("Data_Akun_Mahasiswa.txt");
		rename("Data_Akun_Baru_Mahasiswa.txt", "Data_Akun_Mahasiswa.txt");
		
		if(m<1){
			printf("\nData tidak di temukan, Mohon Inputkan data praktikan terlebih dahulu...\n\n");
			return main();
	}
}

int delete_data(){
	FILE *lama, *baru;
	lama = fopen ("Data_Akun_Mahasiswa.txt","r");
	baru = fopen ("Data_Akun_Baru_Mahasiswa.txt", "w");
		
	system("cls");
	printf("=== Delete Data ===\n\n");
    printf("Masukkan NIM Praktikan yang ingin di Delete :  ");
    scanf("%s",hapus);
   	m=0;
   	while(fscanf(lama, "%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n\n\n", nim, nama, kelas, dosen)!=EOF){
   		if(strcmp(hapus,nim)!=0){
   				fprintf(baru, "%s\n", nim);
			   	fprintf(baru, "%s\n", nama);
				fprintf(baru, "%s\n", kelas);
				fprintf(baru, "%s\n\n", dosen);
		   	}
		   	else{
				m++;
		   	}
	  	}
	   	if(m<1){
	   	printf("\nData tidak di temukan, Mohon inputkan data praktikan terlebih dahulu...\n\n");
	   	}else{
	   		printf("-----------------------------------------------------\n\n");
			printf("\t Data Berhasil di Hapus \t\n\n" );
			printf("-----------------------------------------------------\n");
	   	} 
	   fclose(lama);
	   fclose(baru);
	   remove("Data_Akun_Mahasiswa.txt");
	   rename("Data_Akun_Baru_Mahasiswa.txt", "Data_Akun_Mahasiswa.txt");
	   return main();
}

int search_data(){
	FILE *cari;
	cari = fopen ("Data_Akun_Mahasiswa.txt", "r");
	
	system("cls");
	printf("=== Search Data ===\n\n");
    printf("Masukkan NIM Praktikan yang ingin di Cari: ");
    scanf("%s",search);
   	m=0;
   	while(fscanf(cari, "%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n\n\n", nim, nama, kelas, dosen)!= EOF){
   		if(strcmp(search,nim)==0){
   			m++;
   			printf("\nNIM Praktikan	: %s\n", nim);
   			printf("Nama Praktikan	: %s\n", nama);
   			printf("Kelas Praktikan	: %s\n", kelas);
   			printf("Nama Dosen	: %s\n\n", dosen);
		    }
	    }
	    fclose(cari);
	    if(m<1){
	   	printf("\nData tidak ditemukan, Mohon masukkan NIM yang sesuai..\n\n");
	   	return main();
	    }
}

int main(){
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
