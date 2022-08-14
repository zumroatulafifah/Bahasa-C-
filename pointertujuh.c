#include <stdio.h>

int main(){
	char nama[] = "TEKNIK";
	char nama2[] = "INFORMATIKA";
	
	char *p = &nama[0];
	char *t = &nama2[0];
	
	printf("%s %s", p, t);

return 0;	
}
