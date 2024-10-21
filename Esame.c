#include <stdio.h>

// Programma che chiede il numero di esami fatti e i voti ottenuti in ciascun esame.

int main() {
	
    int i, n;
    float media = 0.0; // Inizializzazione corretta della variabile media
    
    // Chiedi il numero di esami
    printf("Inserisci il numero di esami: ");
    scanf("%d", &n);
    
    int voti[n]; // Dichiarazione dell'array per i voti
    
    // Inserimento dei voti
    printf("Inserisci i voti:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &voti[i]);
        media += voti[i];  // Somma dei voti
    }
    
    // Calcolo della media
    media /= n;

    // Stampa del numero di esami e dei voti inseriti
    printf("\nNumero di esami: %d\n", n);
    printf("Voti: ");
    for (i = 0; i < n; i++) {
        printf("%d ", voti[i]);
    }

    // Stampa della media dei voti
    printf("\nMedia voti: %.2f\n", media); // Stampa la media con due cifre decimali

    return 0;
    
}
