#include <stdio.h>
#include <string.h>

void main(){
	char a[20] = "INFORMATIKA";
	char b[20] = {'I','N','F','O','R','M','A','\0'};
	
	printf("Panjang string a = %d\n", strlen(a));
	printf("Panjang string b = %d\n", strlen(b));
}
