#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


struct node {
	struct node *siguiente;
	int dato;
};

struct complejo {
	float real;
	float imaginario;
};

int main(void) {
	int a, b;

	printf("Input two integers: \n");
	scanf("%d%d", &a, &b);

	struct node *inicial;
	inicial = malloc(sizeof *inicial);
	inicial -> dato = a;
	inicial -> siguiente = malloc(sizeof *inicial);
	inicial -> siguiente->dato = b;
	printf("primer dato %d\n", inicial -> dato);
	printf("segundo dato %d\n", inicial -> siguiente->dato);

	struct complejo numero_complejo;
	numero_complejo.real = 1;
	numero_complejo.imaginario = -1;
	printf("parte real  %f\n", numero_complejo.real);
	printf("parte imaginario  %f\n", numero_complejo.imaginario);

	struct complejo *ejemplo;
	ejemplo = malloc(sizeof *ejemplo);
	ejemplo -> real = 1.0;
	ejemplo -> imaginario = 3.0;

	return 0;
}
