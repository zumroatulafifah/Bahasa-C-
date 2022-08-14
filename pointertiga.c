#include <stdio.h>

int main(){
	int angka[5];
	int *p = &angka[0];
	int i;
	
	printf("Angka 1 : ");
	scanf("%d", &p[0]);
	
	printf("Angka 2 : ");
	scanf("%d", &p[1]);
	
	printf("Angka 3 : ");
	scanf("%d", &p[2]);
	
	printf("Angka 4 : ");
	scanf("%d", &p[3]);
	
	printf("Angka 5 : ");
	scanf("%d", &p[4]);
	
	printf("\n");
	
	for(i=0; i<5; i++){
		printf("%d", *p);
		p++;
	}
	
return 0;
}
