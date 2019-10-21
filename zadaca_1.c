#include <stdio.h>

int main() {
	int zn_1, zn_2, broj;
	printf("Upisi dvoznamenkasti broj\n");
	scanf("%d", &broj);
	zn_1 = broj / 10;
	zn_2 = broj % 10;
	printf("Prva znamenka je %d\n", zn_1);
	printf("Druga znamenka je %d\n", zn_2);
}