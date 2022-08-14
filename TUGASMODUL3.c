#include <stdio.h>

int main (){
	int menu, pilih_pesanan, jumlah_pesanan, grandtotal = 0, bayar, harga1, harga2, harga3;
	char penentuan;
	
	atas:
	printf("========== RESTORAN MAKAN AFIFAH =========\n\n");
	printf("Daftar Menu : \n\n");
	printf("No.	Menu			Harga\n");
	printf("1.	Asem-Asem Balungan	Rp. 50.000\n");
	printf("2.	Ceker Ayam Pedas	Rp. 35.000\n");
	printf("3.	Es Degan		Rp. 5.000\n");
	printf("==========================================\n");
	
	printf("Jumlah Menu yang dipesan : ");
	scanf("%d", &menu);
	printf("\n------------------------------------------\n");
	
	int i; 	// untuk int i saya deklarasikan diluar karena pada saat saya taruh di dalam for itu tidak bisa di compile 
	for (i=1 ; i<=menu; i++){
		
		menu:
		printf("Pilih Menu %d: ", i);
		scanf("%d", &pilih_pesanan);
			
		switch(pilih_pesanan){
			case 1:
				printf("\nAnda Memilih Asem-Asem Balungan\n");
				printf("==========================================\n");
				printf("Masukkan Jumlah Pesanan : ");	
				scanf("\n%d", &jumlah_pesanan);
				printf("Qty : %d Asem-Asem Balungan\n", jumlah_pesanan);
				harga1 = jumlah_pesanan * 50000;
				printf("\nTotal Harga : %d\n", harga1);
				printf("------------------------------------------\n");
				grandtotal += harga1;
				break;
			case 2:
				printf("\nAnda Memilih Ceker Ayam Pedas\n");
				printf("==========================================\n");
				printf("Masukkan Jumlah Pesanan : ");
	 			scanf("%d", &jumlah_pesanan);
				printf("Qty : %d Ceker Ayam Pedas\n", jumlah_pesanan);
				harga2 = jumlah_pesanan * 35000;
				printf("\nTotal Harga : %d\n", harga2);
				printf("------------------------------------------\n");
				grandtotal += harga2;
				break;
			case 3:
				printf("\nAnda Memilih Es Degan\n");
				printf("==========================================\n");	
				printf("Masukkan Jumlah Pesanan : ");
				scanf("%d", &jumlah_pesanan);
				printf("Qty : %d Es Degan\n", jumlah_pesanan);
				harga3 = jumlah_pesanan * 5000;
				printf("\nTotal Harga : %d\n", harga3);
				printf("------------------------------------------\n");	
				grandtotal += harga3;
				break;
			default:
				printf("\nMaaf, Pesanan anda tidak ada dimenu silahkan pilih sesuai menu....");
				printf("\n------------------------------------------\n");	
				goto menu;
		}
		
	}
		pembayaran:
		printf("Grand Total	: %d\n", grandtotal);
		printf("Tunai		: ");
		scanf("%d", &bayar);
		
		if(bayar > grandtotal){
			printf("Kembali		: %d\n\n", bayar - grandtotal);
			printf("Silahkan Ambil Kembalian di kasir dan Mohon ditunggu Pesanannya....");
			printf("\n------------------------------------------\n");		
		}else if(bayar == grandtotal){
			printf("\nPembayaran Terpenuhi Silahkan Ditunggu Pesanannya....");
			printf("\n------------------------------------------\n");
		}else{
			printf("\nMaaf, uang anda tidak cukup silahkan bayar sesuai Grand Total...");
			printf("\n------------------------------------------\n");
			goto pembayaran;
		}
		
		printf("Apakah Anda ingin Melanjutkan program ? [Y/N] : "); 
		scanf("%s", &penentuan);	
		printf("------------------------------------------\n");	
		
		switch(penentuan){
			case 'Y':
			case 'y':
				grandtotal = 0;
				goto atas;
				break;
			case 'N':
			case 'n':
				break;
		}
return 0;
}


