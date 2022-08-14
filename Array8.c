#include <stdio.h>

int main(){
	int array[3][5] = {{1,2,3,4,5},{2,4,6,8,10},{3,6,9,12,15}};
	int i,j;
	
	for(i=0; i<3; i++){
		for(j=0; j<5; j++){
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	printf("\n%d\n", array[0][1]);
	printf("%d\n", array[1][2]);
	printf("%d\n", array[2][3]);
	
	
return 0;
}
