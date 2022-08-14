#include <stdio.h>

int main(){
	
	int a[10], b[10], c[10], i;
	printf("nilai boruto   :\n");
	for (i=1;i<=3;i++){
		printf("ujian prodgas ke-%d   :", i);
		scanf("%d", &a[i]);	
	}
	printf("nilai sarada   :\n");
	for (i=1;i<=3;i++){
		printf("ujian prodgas ke-%d   :", i);
		scanf("%d", &b[i]);
	}
	printf("rekap perbandingan nilai boruto dan sarada : \n");
	c[1]=a[1]-b[1];
	c[2]=a[2]-b[2];
	c[3]=a[3]-b[3];
	for(i=1;i<=3;i++){
		if(c[i]>0){
			printf("hasilnya  : 1\n");
		}
		else{
			printf("hasilnya  : 0\n");
		}
	}
}
