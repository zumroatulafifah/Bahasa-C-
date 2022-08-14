#include <stdio.h>

int main(){
	int n1 = 2 + 3 * 5;
	printf("Nomor 1 = %d\n", n1);
	
	int n2 = 10 - 7 +3 % 6;
	printf("Nomor 2 = %d\n", n2);
	
	int n3 = 3 % 7 / 2 - 1;
	printf("Nomor 3 = %d\n", n3);
	
	int a = 5;
	int n4 = ++a * 3 / 6 % 7;
	printf("Nomor 4 = %d\n", n4);
	
	int b = 2;
	int n5 = 3 * b++ - 4 * 7;
	printf("Nomor 5 = %d\n", n5);
	
	int n6 = 6<<2;
	printf("Nomor 6 = %d\n", n6);
	
	int n7 = 12>>3;
	printf("Nomor 7 = %d\n", n7);
	
	return 0;
}
