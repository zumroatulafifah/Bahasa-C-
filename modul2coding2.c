#include <stdio.h>

int volume_balok(int P, int L, int T){
	int volumeB;
	volumeB = P*L*T;
	return volumeB;
}
int luas_balok(int P, int L, int T){
	int luasB;
	luasB = 2*(P*L + P*T + L*T);
	return luasB;
}
int volume_kubus(int s){
	int volumeK;
	volumeK = s*s*s;
	return volumeK;
}
int luas_kubus(int s){
	int luasK;
	luasK = 6*s*s;
	return luasK;
}
float volume_tabung(int r, int t, float phi){
	float volumeT;
	volumeT = phi*r*r*t;
	return volumeT; 
}
float luas_tabung(int r, int t, float phi){
	float luasT;
	luasT = 2*phi*r*(r+t);
	return luasT;
}

int main (){
	int P, L, T, s, r, t; 
	float volumeT, phi, luasT;
	int volumeB, volumeK, luasB, luasK; 
	
	printf("Menghitung Luas Permukaan dan Volume Balok :\n\n");
	
	printf("Input Nilai Panjang Balok = ");
	scanf("%d", &P);
	
	printf("Input Nilai Lebar Balok = ");
	scanf("%d", &L);
	
	printf("Input Nilai Tinggi Balok = ");
	scanf("%d", &T);
		
	volumeB = volume_balok(P, L, T);
	printf("Volume Balok = %d\n", volumeB);
	
	luasB = luas_balok(P, L, T);
	printf("Luas Permukaan Balok = %d\n", luasB);
	printf("=============================================\n");
	
	printf("\nMenghitung Luas Permukaan dan Volume Kubus :\n\n");
	
	printf("Input Nilai Sisi Kubus = ");
	scanf("%d", &s);
	
	volumeK = volume_kubus(s);
	printf("Volume Kubus = %d\n", volumeK);
	
	luasK = luas_kubus(s);
	printf("Luas Permukaan Kubus = %d\n", luasK);
	printf("=============================================\n");
	
	printf("\nMenghitung Luas Permukaan dan Volume Tabung :\n\n");
	
	printf("Input Nilai Phi Tabung = ");
	scanf("%f", &phi);
	
	printf("Input Nilai Jari - Jari Tabung = ");
	scanf("%d", &r);
	
	printf("Input Nilai Tinggi Tabung = ");
	scanf("%d", &t);
	
	volumeT = volume_tabung(r, t, phi);
	printf("Volume Tabung = %.2f\n", volumeT);
	
	luasT = luas_tabung(r, t, phi);
	printf("Luas permukaan Tabung = %.2f\n", luasT);
	printf("=============================================\n");
	return 0;
}  



