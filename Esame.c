#include <stdio.h>
#include <stdlib.h>

// Programma che in base all'input dell'utente, ci fornisce il risultato dell'esame

int main() {

	int voto;

	printf("Inserisci voto: ");
	scanf("%d", &voto);

	if (voto > 31)
		printf("Valore non corretto");
	else if (voto == 31)
		printf("A+");
	else if (voto >= 28 && voto <= 30)
		printf("A");
	else if (voto >= 25)
		printf("B");
	else if (voto >= 22)
		printf("C");
	else if(voto >= 18)
		printf("D");
	else
		printf("Esame non superato");
		
}
