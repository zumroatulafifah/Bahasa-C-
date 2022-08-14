#include <stdio.h>

int main(){
	char huruf[4][2] = {{'a','b'},{'c','d'},{'e','f'},{'g','h'}};
	int i, j;
	
	for(i=0; i<4; i++){
		for(j=0; j<2; j++){
			printf("%c ", huruf[i][j]);
		}
		printf("\n");
	}
	printf("\n%c\n", huruf[1][1]);
	printf("%c\n", huruf[2][1]);
	printf("%c\n", huruf[3][0]);
	
return 0;
}
