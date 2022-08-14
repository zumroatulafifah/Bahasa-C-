#include <stdio.h>

int volume_balok(int P, int L, int T){
	int volumeB;
	volumeB = P*L*T;
	return volumeB;
}
int luas_balok(int P, int L, int T){
	int luasB;
	luasB = 2 * (P*L + P*T + L*T);
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
	luasT = 2*phi* r*(r+t);
	return luasT;
}

int main(){
	int P = 4;
	int L = 5;
	int T = 6;
	int s = 3;
	int r = 6;
	int t = 8;
	float phi = 3.14;
	int volumeB, luasB, volumeK, luasK;
	float volumeT, luasT;
	
	volumeB = volume_balok(P,L,T);
	printf("Volume Balok = %d\n", volumeB);
	
	luasB = luas_balok(P,L,T);
	printf("Luas Permukaan Balok = %d\n\n", luasB);
	
	volumeK = volume_kubus(s);
	printf("Volume Kubus = %d\n", volumeK);
	
	luasK = luas_kubus(s);
	printf("Luas Permukaan Kubus = %d\n\n", luasK);
	
	volumeT = volume_tabung(r,t,phi);
	printf("Volume Tabung = %.2f\n", volumeT);
	
	luasT = luas_tabung(r,t,phi);
	printf("Luas Permukaan Tabung = %.2f\n\n", luasT);
	return 0;
	
	
}
