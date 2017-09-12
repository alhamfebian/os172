/*
 * Name : [Alham Febian Rinaldy]	
 * NPM : [1506757636]
 * Class : [A]
 * Comment : ["For the first time"]
 */

#define LOOP 2
# include <stdio.h>

void main() {
	int ii, angka, result;
	printf("Masukan angka: ");
	scanf("%d", &angka);
	for (ii=0; ii<LOOP; ii++) {
		result = angka * angka;
	}
	printf("%d to the power of 2 equals %d\n", angka, result);
}
