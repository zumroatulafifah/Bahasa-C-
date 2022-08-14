#include <stdio.h>

int main(){
	printf("Tahun\tJumlah\n");
	int array[4][2] = {{2009,1750},{2008,1345},{2007,950},{2006,657}};
	int *p = &array[0][0];
	int i,j;
	
	for(i=0; i<4; i++){
		for(j=0; j<2; j++){
			printf(" %d\t", *p);
		p++;
		}
		printf("\n");
	}
return 0;
}
