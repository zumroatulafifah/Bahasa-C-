#include <stdio.h>

int main(){
	int angka[5] = {2,4,6,8,10};
	int *p = &angka[0];
	int i;
	
	for(i=0; i<5; i++){
		printf("%d\n", *p);
		p++;
	}
	
	
return 0;
}
