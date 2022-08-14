#include <stdio.h>

int main(){
	char array[3][10] = {{"jakarta"},{"surabaya"},{"medan"}};
	int i;
	
	for(i=0; i<3; i++){
		printf("%s \t", array[i]);
	};
return 0;
}
