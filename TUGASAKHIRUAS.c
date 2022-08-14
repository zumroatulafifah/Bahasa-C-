#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

void banner(){
	
	printf("=============================================================\n");
	printf("========================= MONEY BANK ========================\n");
	printf("=============================================================\n");
}

void getmenu();
void menu_pilih_transfer();
void terbilang(long x);

int main(){
	system("COLOR 17");
	system("mode con cols=61 lines=30");
	int saldo = 1000000, pin, pin_new, pin1 = 888888,tarik, rekeningTujuan, setor, transfer, pilih, pilih2, pilih3, biayaTF, i=0, j=0;
	system ("cls");
	banner();
	
	login:
	pin:
		system("cls");
		banner();
		printf("\n JAGALAH KERAHASIAAN PIN ANDA\n\n");
		printf(" MASUKKAN PIN ANDA		: "); scanf("%d", &pin);
		if(pin==pin1){
			goto menu;
		}else if(i<2){
			system("cls");
			banner();
			i+=1;
			printf("\n PIN YANG ANDA MASUKKAN SALAH!!\n\n");
			printf(" TEKAN 'ENTER' UNTUK MEMASUKKAN PIN\n\n");
			getch();
			system("cls");
			banner();
			goto pin;
		}else{
			system("cls");
			printf("\t\t\tNOMOR PIN\n");
			printf("\t\tYANG ANDA MASUKKAN SALAH\n\n");
			printf("\t\t    UNTUK KEAMANAN\n");
			printf("\t\tKARTU ANDA KAMI BLOKIR\n\n");
			printf("\tSILAHKAN HUBUNGI CUSTOMER SERVICE KAMI\n\n");
			printf("\t\tJIKA ANDA MENGALAMI KESULITAN\n");
			printf("\t   HUBUNGI MITRA CALL BANK YUK BISA YUK\n");
			printf("\t\t\t729840\n\n");
			printf("\t\tBUKAN NOMOR YANG LAIN");
			getch();
			goto end;
		}
		
	menu:
		system("cls");
		getmenu();
		printf(" MASUKKAN PILIHAN ANDA	: "); scanf("%d", &pilih); system("cls");
		
		switch(pilih){
			case 1: 
				pilihtf:
				system("cls");
				menu_pilih_transfer();
				printf(" MASUKKAN PILIHAN ANDA	: "); scanf("%d", &pilih2);
				system("cls");
				
		switch(pilih2){
			case 1: 
				tflagi:
				printf("=================== KE REKENING MONEY BANK ==================\n");
				printf(" MASUKKAN NOMOR REK. TUJUAN	: "); scanf("%d", &rekeningTujuan);
				system("cls");
				printf("=================== KE REKENING MONEY BANK ==================\n");
				printf(" MASUKKAN JUMLAH NOMINAL YANG INGIN DITRANSFER	: "); scanf("%d", &transfer);
				system("cls");
				if(transfer>saldo){
					printf("\n");
					printf("		      TRANSAKSI GAGAL\n\n");
					printf("\n SALDO ANDA TIDAK MENCUKUPI. SALDO ANDA SAAT INI Rp.%d,-\n\n", saldo);
					back:
					printf(" TRANSAKSI LAGI ?\n");
					printf(" 1.	YA\n"); printf(" 2.	TIDAK\n"); printf(" PILIH	>> "); scanf("%d", &pilih3); system("cls");
					if(pilih3 == 1){
						goto tflagi;
					}else if(pilih3 == 2){
						goto end;
					}else{
						printf(" PILIH ANTARA 1 DAN 2\n\n");
						goto back;
					}
				}else if(saldo>=transfer){
					saldo = saldo - transfer;
					printf("\n");
					printf("		      TRANSAKSI BERHASIL\n");
					printf("\n\t\tTERIMAKASIH ATAS KEPERCAYAAN ANDA\n");
					printf("\n\t\t  SALDO ANDA SAAT INI Rp.%d,-\n\n", saldo);
				}
					printf("=================== KE REKENING MONEY BANK ==================\n");
					printf(" REKENING TUJUAN	: %d\n", rekeningTujuan);
					printf(" JUMLAH TRANSFER	: Rp.%d,-\n", transfer);
					printf(" TERBILANG		: "); terbilang(transfer); printf("Rupiah\n");
					printf("============================================================\n");
					goto konfirmasi;
				break;
			case 2:
				tflagi2:
				printf("================== KE REKENING BANK LAIN ================\n");
				printf(" MASUKKAN NOMOR REK. TUJUAN	: "); scanf("%d", &rekeningTujuan);
				system("cls");	
				printf("=================== KE REKENING MONEY BANK ==================\n");
				printf(" MASUKKAN JUMLAH NOMINAL YANG INGIN DITRANSFER	: "); scanf("%d", &transfer);
				system("cls");
				if(transfer>saldo){
					printf("\n");
					printf("		      TRANSAKSI GAGAL\n\n");
					printf("\n SALDO ANDA TIDAK MENCUKUPI. SALDO ANDA SAAT INI Rp.%d,-\n\n", saldo);
					back2:
					printf(" TRANSAKSI LAGI ?\n");
					printf(" 1.	YA\n"); printf(" 2.	TIDAK\n"); printf(" PILIH	>> "); scanf("%d", &pilih3); system("cls");
					if(pilih3 == 1){
						goto tflagi2;
					}else if(pilih3 == 2){
						goto end;
					}else{
						printf(" PILIH ANTARA 1 DAN 2\n\n");
						goto back2;
					}
				}else if(saldo>=transfer){
					biayaTF = 7500;
					saldo = saldo - transfer - biayaTF;
					printf("\n");
					printf("		      TRANSAKSI BERHASIL\n");
					printf("\n\t\tTERIMAKASIH ATAS KEPERCAYAAN ANDA\n");
					printf("\n\t\t  SALDO ANDA SAAT INI Rp.%d,-\n\n", saldo);
				}
					printf("=================== KE REKENING MONEY BANK ==================\n");
					printf(" REKENING TUJUAN	: %d\n", rekeningTujuan);
					printf(" JUMLAH TRANSFER	: Rp.%d,-\n", transfer);
					printf(" TERBILANG		: "); terbilang(transfer); printf("Rupiah\n");
					printf("\n BIAYA TRANSFER KE REKENING BANK LAIN : Rp.7500,-\n");
					printf("============================================================\n");
					goto konfirmasi;
					break;
				case 3: {
					goto menu;
					break;
				}
				default:
					menu_pilih_transfer();
					printf(" PILIH ANTARA 1 - 3. TEKAN 'ENTER' UNTUK MEMILIH\n");
					getch();
					goto pilihtf;
		}
			case 2: 
				system("cls");
				tariklagi:
				printf("======================= TARIK TUNAI ======================\n");
				printf(" MASUKKAN NOMINAL YANG INGIN ANDA TARIK	: "); scanf("%d", &tarik);
				system("cls");
				if(tarik < 10000){
					printf("\n");
					printf("\t   NOMINAL PENARIKAN MINIMAL Rp.10000,- !\n\n");
					back3:
					printf(" TRANSAKSI LAGI ?\n");
					printf(" 1.	YA\n"); printf(" 2.	TIDAK\n"); printf(" PILIH	>> "); scanf("%d", &pilih3); system("cls");
					if(pilih3 == 1){
						goto tariklagi;
					}else if(pilih3 == 2){
						goto end;
					}else{
						printf(" PILIH ANTARA 1 DAN 2\n\n");
						goto back4;
					}
					goto tariklagi;
				}else if(saldo<tarik){
					printf("\n");
					printf("		      TRANSAKSI GAGAL\n\n");
					printf("\n SALDO ANDA TIDAK MENCUKUPI. SALDO ANDA SAAT INI Rp.%d,-\n\n", saldo);
					back4:
					printf(" TRANSAKSI LAGI ?\n");
					printf(" 1.	YA\n"); printf(" 2.	TIDAK\n"); printf(" PILIH	>> "); scanf("%d", &pilih3); system("cls");
					if(pilih3 == 1){
						goto tflagi2;
					}else if(pilih3 == 2){
						goto end;
					}else{
						printf(" PILIH ANTARA 1 DAN 2n\n");
						goto back4;
					}
				}else if(saldo>=tarik){
					saldo = saldo - tarik;
					printf("\n");
					printf("		      TRANSAKSI BERHASIL\n");
					printf("\n\t\tTERIMAKASIH ATAS KEPERCAYAAN ANDA\n");
					printf("\n\t\t  SALDO ANDA SAAT INI Rp.%d,-\n\n", saldo);
				}
					printf("\n===================== TARIK TUNAI ====================\n");
					printf(" JUMLAH PENARIKAN	:Rp.%d,-\n", tarik);
					printf(" TERBILANG		:"); terbilang(tarik); printf("Rupiah\n");
					printf("============================================================\n");	
					goto konfirmasi;	
					break;
			case 3:
				setorlagi:
				system("cls");
				printf("======================= SETOR TUNAI ======================\n");
				printf(" PASTIKAN UANG ANDA TIDAK LUSUH, TIDAK TERLIPAT, DAN TIDAK BER-KLIP\n\n");
				printf(" PECAHAN UANG YANG DAPAT DISETOR HARUS KELIPATAN Rp.50000,- !\n");
				printf("\n MASUKKAN NOMINAL YANG INGIN DISETOR	: "); scanf("%d", &setor);
				if(setor % 50000 != 0){
					system("cls");
					printf("\n");
					printf("		      TRANSAKSI GAGAL\n\n");
					printf(" NOMINAL YANG ANDA MASUKKAN BUKAN KELIPATAN Rp.50000,-\n\n");
					back5:
					printf(" TRANSAKSI LAGI ?\n");
					printf(" 1.	YA\n"); printf(" 2.	TIDAK\n"); printf(" PILIH	>> "); scanf("%d", &pilih3); system("cls");
					if(pilih3 == 1){
						goto setorlagi;
					}else if(pilih3 == 2){
						goto end;
					}else{
						printf(" PILIH ANTARA 1 DAN 2\n\n");
						goto back5;
					}	
				}else{
					system("cls");
					saldo = saldo + setor;
					printf("\n");
					printf("		      TRANSAKSI BERHASIL\n");
					printf("\n\t\tTERIMAKASIH ATAS KEPERCAYA AN ANDA\n");
					printf("\n\t\t  SALDO ANDA SAAT INI Rp.%d,-\n\n", saldo);
					printf("\n<< TEKAN 'ENTER' UNTUK KEMBALI KE MENU");
					getch();
					goto menu;
				}
				break;
			case 4:
				system("cls");
				printf("====================== INFORMASI SALDO =====================\n");
				printf(" SALDO ANDA SAAT INI Rp.%d,-\n", saldo);
				printf(" TERBILANG	: "); terbilang(saldo); printf("Rupiah\n");
				printf("============================================================\n");
				printf("\n<< TEKAN 'ENTER' UNTUK KEMBALI KE MENU");
				getch();
				goto menu;	
				break;
			case 5:
				pinLama:
				system("cls");
				printf("======================= GANTI PIN ATM ======================\n");
				printf(" MASUKKAN PIN LAMA	: "); scanf("%d", &pin);
				if(pin==pin1){
					goto pinBaru;
				}else if(j<2){
					system("cls");
					printf(" PIN YANG ANDA MASUKKAN SALAH!!\n\n");
					printf(" TEKAN 'ENTER' UNTUK MEMASUKKAN PIN\n\n");
					j+=1;
					getch();
					goto pinLama;	
				}else{
					system("cls");
					printf("\t\t\tNOMOR PIN\n");
					printf("\t\tYANG ANDA MASUKKAN SALAH\n\n");
					printf("\t\t    UNTUK KEAMANAN\n");
					printf("\t\tKARTU ANDA KAMI BLOKIR\n\n");
					printf("\tSILAHKAN HUBUNGI CUSTOMER SERVICE KAMI\n\n");
					printf("\t\tJIKA ANDA MENGALAMI KESULITAN\n");
					printf("\t   HUBUNGI MITRA CALL BANK YUK BISA YUK\n");
					printf("\t\t\t729840\n\n");
					printf("\t\tBUKAN NOMOR YANG LAIN");
					getch();
					goto end;
				}
				pinBaru:
					printf(" MASUKKAN PIN BARU	: "); scanf("%d", &pin_new);
					if(pin_new>=999999){
						printf("\n\t\tInputkan PIN Sebanyak 6 Digit\n\n");
						printf(" TEKAN 'ENTER' UNTUK MEMASUKKAN PIN\n\n");
						getch();
						goto pinLama;
					}
					if(pin_new == pin1){
						back6:
						printf("\nPIN LAMA DAN PIN BARU SAMA. APAKAH ANDA INGIN MENGGANTI PIN ?\n");
						printf(" 1.	YA\n"); printf(" 2.	TIDAK\n"); printf(" PILIH	: "); scanf("%d", &pilih3);
					if(pilih3 == 1){
							goto pinLama;
						}else if(pilih3 == 2){
							goto menu;
						}else{
							system("cls");
							printf(" PILIH ANTARA 1 DAN 2\n");
							goto back6;
						} 
					}
                    else if(pin_new<=100000){
                    	printf("\n\t\tInputkan PIN Sebanyak 6 Digit\n\n");
						printf(" TEKAN 'ENTER' UNTUK MEMASUKKAN PIN\n\n");
						getch();
						goto pinLama; 
                    }
						system("cls");
						pin1=pin_new;
						printf("======================= GANTI PIN ATM ======================\n");
						printf(" GANTI PIN BERHASIL. SILAHKAN LOGIN KEMBALI. TEKAN 'ENTER'\n\n");
						getch();
						goto login;
					break;
			case 6:
				goto end;
				break;
			default :
				getmenu();
				printf(" PILIH ANTARA 1 - 6. TEKAN 'ENTER' UNTUK MEMILIH\n\n");
				getch();
				goto menu;
			
	}
		konfirmasi:
		printf("\n APAKAH ANDA INGIN MELANJUTKAN ?\n");
		printf(" 1.	YA\n");
		printf(" 2.	TIDAK\n");
		printf(" PILIH	>> ");
		scanf("%d", &pilih);
		if(pilih == 1)
			goto menu;
		else if(pilih == 2)
			goto end;
		else{
			printf("\n PILIH ANTARA 1 DAN 2. TEKAN 'ENTER' UNTUK MEMILIH\n\n");
			getch();
			goto konfirmasi;
		}
	end:
		system("cls");
		printf("=========================== EXIT ==========================\n\n");
		printf("\tTERIMAKASIH TELAH MENGGUNAKAN MONEY BANK\t\n\n");
		printf("===========================================================\n");
		return 0;	
		
}

void getmenu(){
		printf("\n		SILAHKAN MEMILIH TRANSAKSI\n");
		printf("\n   UNTUK MEMBATALKAN TRANSAKSI TEKAN '6' UNTUK CANCEL\n\n");
		printf(" 1.	TRANSFER DANA\n");
		printf(" 2.	TARIK TUNAI\n");
		printf(" 3.	SETOR TUNAI\n");
		printf(" 4.	INFORMASI SALDO\n");
		printf(" 5.	GANTI PIN ATM\n");
		printf(" 6.	CANCEL\n\n");
}

void menu_pilih_transfer(){
		printf("======================= TRANSFER DANA ======================\n");
		printf(" 1. TRANSFER DANA KE REKENING MONEY BANK\n");
		printf(" 2. TRANSFER DANA KE REKENING BANK LAIN\n");
		printf(" 3. KEMBALI KE MENU\n");
		printf("============================================================\n");
}

void terbilang(long x){ // Prosedur mengubah angka menjadi kata
		/* I.S: x mengkonversi nilai x menjadi kata
		F.S: nilai x berubah
		*/
		// Algoritma
		if(x==1){
			printf("Satu ");
		}else if(x==2){   
			printf("Dua ");
		}else if(x==3){
			printf("Tiga ");
		}else if(x==4){
			printf("Empat ");
		}else if(x==5){
			printf("Lima ");
		}else if(x==6){
			printf("Enam ");
		}else if(x==7){
			printf("Tujuh ");
		}else if(x==8){
			printf("Delapan ");
		}else if(x==9){
			printf("Sembilan ");
		}else if(x==10){
			printf("Sepuluh ");
		}else if(x==11){
			printf("Sebelas ");
		}else if(x>=12 && x<=19){
			terbilang(x%10);
			printf("Belas ");
		}else if(x>=20 && x<=99){
			terbilang(x/10);
			printf("Puluh ");
			terbilang(x%10);
		}else if(x>=100 && x<=199){
			printf("Seratus ");
			terbilang(x-100);
		}else if(x>=200 && x<=999){
			terbilang(x/100);
			printf("Ratus ");
			terbilang(x%100);
		}else if(x>=1000 && x<=1999){
			printf("Seribu ");
			terbilang(x-1000);
		}else if(x>=2000 && x<=999999){
			terbilang(x/1000);
			printf("Ribu ");
			terbilang(x%1000);
		}else if(x>=1000000 && x<=999999999){
			terbilang(x/1000000);
			printf("Juta ");
			terbilang(x%1000000);
		}else if(x>=1000000000 && x<=2147483647){
			terbilang(x/1000000000);
			printf("Miliyar ");
			terbilang(x%1000000000);
		}
}
