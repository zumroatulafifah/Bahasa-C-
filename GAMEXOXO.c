#include <stdio.h>
#include <conio.h>

void tampil(char[]);
int cek_menang(char[]);

void main(){
	char tanda, matrix[9] = {'1','2','3','4','5','6','7','8','9'};
	int pemain[2] = {1,2}, hasil, i=0, pilih;
	
	printf("\a\a-------------------------------------- SELAMAT DATANG DI XOXO WORLD --------------------------------------------\n\n");
	do{
		tampil(matrix);
		if(pemain[i%2]==1)
			tanda = 'X';
		else
			tanda = 'O';
		printf("\t\t----------------------------- GILIRAN PEMAIN %d -----------------------------\n", pemain[i%2]);
		printf("\a\n\t\t\tPilih Tempat : ");
		scanf("%d", &pilih);
		fflush(stdin);
		
		switch(pilih){
			case 1 : matrix[0] = tanda;
				break;
			case 2 : matrix[1] = tanda;
				break;
			case 3 : matrix[2] = tanda;
				break;
			case 4 : matrix[3] = tanda;
				break;
			case 5 : matrix[4] = tanda;
				break;
			case 6 : matrix[5] = tanda;
				break;
			case 7 : matrix[6] = tanda;
				break;
			case 8 : matrix[7] = tanda;
				break;
			case 9 : matrix[8] = tanda;
				break;
			default :
				printf("\n\t\t\tPilihan anda tidak sesuai, silahkan ulangi lagi!\n\n");
				i--;
		}
		i++;
		hasil = cek_menang(matrix);
	}
	while(hasil == -1);
	tampil(matrix);
	if(hasil == 1)
		printf("\t==>\t\t\a\aSELAMAT PEMAIN %d KAMU MENANG!!!!\n", pemain[(i+1)%2]);
	else
		printf("\t==>\t\t\aPARA PEMAIN SERI!!!!\n");
	getche();
}

void tampil(char square[]){
	printf("\t\t\t\t		|	|		\t\t\t\t\n");
	printf("\t\t\t\t	   %c	|   %c	|   %c	\t\t\t\t\n", square[0], square[1], square[2]);
	printf("\t\t\t\t\t________|_______|________\t\t\t\t\n");
	printf("\t\t\t\t		|	|		\t\t\t\t\n");	
	printf("\t\t\t\t	   %c	|   %c	|   %c	\t\t\t\t\n", square[3], square[4], square[5]);
	printf("\t\t\t\t\t________|_______|________\t\t\t\t\n");
	printf("\t\t\t\t		|	|		\t\t\t\t\n");
	printf("\t\t\t\t	   %c	|   %c	|   %c	\t\t\t\t\n", square[6], square[7], square[8]);	
	printf("\t\t\t\t\t	|	|        \t\t\t\t\n\n");
}

int cek_menang(char cek[]){
	if (cek[0] == cek[1] && cek[1] == cek[2])
		return 1;
	else if (cek[3] == cek[4] && cek[4] == cek[5])
		return 1;
	else if (cek[6] == cek[7] && cek[7] == cek[8])
		return 1;
	else if (cek[0] == cek[3] && cek[3] == cek[6])
		return 1;
	else if (cek[1] == cek[4] && cek[4] == cek[7])
		return 1;
	else if (cek[2] == cek[5] && cek[5] == cek[8])
		return 1;
	else if (cek[0] == cek[4] && cek[4] == cek[8])
		return 1;
	else if (cek[2] == cek[4] && cek[4] == cek[6])
		return 1;
	else if (cek[0] != '1' && cek[1] != '2' && cek[2] != '3' && cek[3] != '4' && cek[4] != '5' && cek[5] != '6' && cek[6] != 7 && cek[7] != '8' && cek[8] != '9')
		return 0;
	else
		return -1;
	getche();
}
