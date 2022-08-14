#include <stdio.h>

int main(){
	int array[5][2] = {{1,70},{2,85},{3,90},{4,75},{5,85}};
	int i,j;
	
	for(i=0; i<5; i++){
		for(j=0; j<2; j++){
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
return 0;
}
