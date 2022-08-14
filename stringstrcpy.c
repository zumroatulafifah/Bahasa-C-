#include <stdio.h>
#include <string.h>

int main(){
	char str1[] = "Halo Praktikan";
	char str2[] = "Informatika UMM";
	char str3[30];
	
	strcpy(str1, str2);
	strcpy(str3, "Berhasil disalin");
	printf("str1: %s\nstr2: %s\nstr3:%s", str1, str2, str3);
	
return 0;
}
