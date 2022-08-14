#include <stdio.h>

int main ()
{
	int p, k, pti, o;
	float r; 
	char nama_mahasiswa[50];
		
	printf ("Input nama mahasiswa :");							
	gets (nama_mahasiswa);
	printf ("==========================================\n");
	
	printf ("Input nilai pemograman dasar : ");
	scanf ("%d", &p);
	printf ("==========================================\n");
		
	printf ("Input nilai kalkulus : ");
	scanf ("%d", &k);
	printf ("==========================================\n");
	
	printf ("Input nilai pengantar teknologi informasi : ");
	scanf ("%d", &pti);
	printf ("==========================================\n");
		
	printf ("Input nilai orkom : ");
	scanf ("%d", &o);
	printf ("==========================================\n");
	
	r = (p+k+pti+o)/4;
	
	printf ("Hasil nilai rata - rata : %f\n", r);
	printf ("==========================================\n");

	if (r>=75) {
		printf ("Selamat %s kamu LULUS!!!\n", nama_mahasiswa);
	}
	else {
		printf ("Maaf %s kamu GAGAL!!!\n", nama_mahasiswa);
	}
	return 0;
}	


