#include <stdio.h>

int main(){
	float desimal[5] = {1.2, 3.4, 5.6, 7.8, 9.0};
	int i;
	
	for(i=0; i<5; i++){
		printf("%.1f\n", desimal[i]);
	}
return 0;
}
