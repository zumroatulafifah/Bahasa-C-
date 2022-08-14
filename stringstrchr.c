#include <stdio.h>
#include <string.h>

int main(){
	char str[] = "INFOTECH";
	char ch = 'I';
	char *hasil;
	
	hasil = strchr(str, ch);
	printf("Setelah karakter |%c| adalah - |%s|\n", ch, hasil);
	
return 0;
}
