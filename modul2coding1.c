#include <stdio.h>

int balok(){
	int volumeB, luasB;
	int P, L, T;
	
	printf("Menghitung Luas dan Volume Balok :\n\n");
	
	printf("Input Nilai Panjang Balok = ");
	scanf("%d", &P);
	
	printf("Input Nilai Lebar Balok = ");
	scanf("%d", &L);
	
	printf("Input Nilai Tinggi Balok = ");
	scanf("%d", &T);
	
	volumeB = P*L*T;
	printf("Volume Balok = %d\n", volumeB);
	
	luasB = 2*(P*L + P*T + L*T);
	printf("Luas Permukaan Balok = %d\n", luasB);
	printf("======================================\n");
	return 0;
}
int kubus(){
	int volumeK, luasK;
	int s;
	
	printf("Menghitung Luas dan Volume Kubus :\n\n");
	
	printf("Input Nilai Sisi Kubus = ");
	scanf("%d", &s);
	
	volumeK = s*s*s;
	printf("Volume Kubus = %d\n", volumeK);
	
	luasK = 6*s*s;
	printf("Luas Permukaan Kubus = %d\n", luasK);
	printf("======================================\n");
	return 0;	
}
int tabung(){
	int r,t;
	float phi, volumeT, luasT;
	
	printf("Menghitung Luas dan Volume Tabung :\n\n");
	
	printf("Input Nilai Phi = ");
	scanf("%f", &phi);
	
	printf("Input Nilai Jari - Jari Tabung = ");
	scanf("%d", &r);
	
	printf("Input Nilai Tinggi Tabung = ");
	scanf("%d", &t);
	
	volumeT = phi*r*r*t;
	printf("Volume Tabung = %.2f\n", volumeT);
	
	luasT = 2*phi*r*(r+t);
	printf("Luas Permukaan Tabung = %.2f\n", luasT);
	printf("======================================\n");
	return 0;
}

int main(){
	
	balok();
	kubus();
	tabung();
	
	return 0;
}
