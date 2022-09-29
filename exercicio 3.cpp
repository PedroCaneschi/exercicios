#include <stdio.h>
#include <stdlib.h>

int valorlogico(int);

int main() {
	int valor;
	
	printf("Digite um valor que seja inteiro e positivo: ");
	scanf("%i", &valor);
	
	printf("1 = Verdadeiro\n0 = Falso\n");
	printf("O valor logico sera %i", valorlogico(valor));
	
	return 0;
}

int valorlogico(int v) {
	int i;
	
	if (v < 0)
	return -1;
	
	for (i = 2; i <= v/2; i++) {
		if (v % i == 0) {
			return 0;
		} else if (v % i == 1) {
			return 1;
		}
	}
}
