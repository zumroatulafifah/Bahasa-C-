#include <stdio.h>

int main(){
	char kata[] = "TEKNIK";
	char *p = &kata[0];
	
	printf("Karakter 1	: %c\n", *p);
	printf("Karakter 2	: %c\n", *(p+1));
	printf("Karakter 3	: %c\n", *(p+2));
	printf("Karakter 4	: %c\n", *(p+3));
	printf("Karakter 5	: %c\n", *(p+4));
	printf("Karakter 6	: %c\n", *(p+5));
	
return 0;
}
