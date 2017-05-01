#include <stdio.h>

// wczytaj dwie liczby typu REAL i oblicz:
// a) ich sume, roznice, iloczyn;
// b) ich iloraz; jesli dzielnik bedzie zerem
// wyprowadz te informacje na ekran


main(){

float dzielna, dzielnik;

printf("Podaj dwie dowolne liczby rzeczywiste: \n- liczba pierwsza (dzielna): ");
scanf("%f", &dzielna);

printf("- liczba druga (dzielnik): ");
scanf("%f", &dzielnik);

if (dzielnik ==0) printf("\nDzielnik nie moze byc rowny '0'.\n");
else printf("\nIloraz liczb to: %f\n", dzielna/dzielnik);


}
