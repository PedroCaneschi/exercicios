#include <stdio.h>
#include <math.h>

float volume(float);

int main() {
	float raio;
	
	printf("Digite o valor do raio da esfera: ");
	scanf("%f", &raio);
	
	printf("O volume da e igual a %.2f\n", volume(raio));
	
	return 0;
}

float volume(float r) {
	float vol;
	
	if (r<0)
	return -1;
	
	vol = (4*3.14*pow(r,3))/3;
	
	return vol;
}
