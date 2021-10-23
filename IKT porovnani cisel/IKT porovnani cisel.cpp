// IKT porovnani cisel.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <stdio.h>
#include <math.h>

int main(void) {
	int x = 19;
	int y = 89;
	printf("Cislo %d ", x);
	if (x > y) {
		printf("je vetsi nez %d ", y);
	}
	else {
		printf("je mensi nez %d ", y);
	}
}

