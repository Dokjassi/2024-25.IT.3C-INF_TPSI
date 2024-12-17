#include <stdio.h>

// Funzione per simulare la porta NOT
int NOT(int a) {
    // Il valore di ritorno della funzione
    return 1 - a;
}

// Funzione per simulare la porta AND
int AND(int a, int B) {
    // Il valore di ritorno della funzione
    // TODO aggiungere l'espressione matematica per soddisfare la porta AND
    return a * B;
}

// Funzione per simulare la porta OR
int OR(int a, int B) {
    // Il valore di ritorno della funzione
    // TODO aggiungere l'espressione matematica per soddisfare la porta OR
    return a + B - (a*B);
}



int main
() {

int A,B,C,D,E,F;

printf("Inserisci il valore di A (0 o 1):\n");
    scanf("%d", &A);
printf("Inserisci il valore di B (0 o 1):\n");
    scanf("%d", &B);
printf("Inserisci il valore di C (0 o 1):\n");
    scanf("%d", &C);
printf("Inserisci il valore di D (0 o 1):\n");
    scanf("%d", &D);
printf("Inserisci il valore di E (0 o 1):\n");
    scanf("%d", &E);
printf("Inserisci il valore di F (0 o 1):\n");
    scanf("%d", &F);
     if (A != 0 && A != 1 && B != 0 && B != 1 && C != 0 && C != 1 && D != 0 && D != 1 && E != 0 && E != 1 && F != 0 && F != 1) {
        printf("I valori inseriti non sono 1 o 0\n");}

        printf("Il valore di A viene trasformato da una porta NOT\n");
        int notA = NOT(A);
        printf("Il valore di uscita della porta NOT è: %d\n", notA);

          printf("I valori di A e notA vengono trasformati da una porta OR\n");
        int orAnotA = OR(A, notA);
        printf("Il valore di uscita della porta OR è: %d\n", orAnotA);

        printf("Il valore di B viene trasformato da una porta NOT\n");
        int notB = NOT(B);
        printf("Il valore di uscita della porta NOT è: %d\n", notB);

          printf("I valori di B e notB vengono trasformati da una porta OR\n");
        int orBnotB = OR(B, notB);
        printf("Il valore di uscita della porta OR è: %d\n", orBnotB);

         printf("I valori di orAnotA e orBnotB vengono trasformati da una porta AND\n");
        int andorAnotAorBnotB = AND(orAnotA, orBnotB);
        printf("Il valore di uscita della porta AND è: %d\n", andorAnotAorBnotB);

        printf("I valori di andorAnotAorBnotB e C vengono trasformati da una porta OR\n");
        int orandorAnotAorBnotBC = OR(andorAnotAorBnotB, C);
        printf("Il valore di uscita della porta OR è: %d\n", orandorAnotAorBnotBC);

        printf("I valori di andorAnotAorBnotBC e D vengono trasformati da una porta OR\n");
        int ororandorAnotAorBnotBCD = OR(orandorAnotAorBnotBC, D);
        printf("Il valore di uscita della porta OR è: %d\n", ororandorAnotAorBnotBCD);

        printf("I valori di andorAnotAorBnotBCD e E vengono trasformati da una porta OR\n");
        int orororandorAnotAorBnotBCDE = OR(ororandorAnotAorBnotBCD, E);
        printf("Il valore di uscita della porta OR è: %d\n", orororandorAnotAorBnotBCDE);
        
         printf("I valori di andorAnotAorBnotBCDE e F vengono trasformati da una porta OR\n");
        int ororororandorAnotAorBnotBCDEF = OR(orororandorAnotAorBnotBCDE, F);
        printf("Il valore di uscita della porta OR è: %d\n", ororororandorAnotAorBnotBCDEF);

     }


    





