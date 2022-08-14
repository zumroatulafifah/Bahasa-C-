#include <stdio.h>
#include <string.h>

int main(){
	char str1[] = "Infotech";
	char str2[] = "InFOtech";
	char str3[] = "Infotech";
	
	int hasil;
	
	hasil =  strcmp(str1,str2);
	printf("strcmp(str1,str2) = %d\n", hasil);
	
	hasil = strcmp(str1,str3);
	printf("strcmp(str1,str3) = %d\n", hasil);
	
return 0;
}
