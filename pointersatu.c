#include <stdio.h>

int main(){
	//membuat variabel
	char huruf[10] = {'A','B','C','D','E','F','G','H','I','J'};
	int i;
	//membuat pointer
	char *p = &huruf[0];
	
	for(i=0; i<10; i++){
		printf("%c\n", *p);
		p++;
	}
return 0;
}
