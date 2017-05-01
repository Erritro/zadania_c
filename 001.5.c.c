#include <stdio.h>

// wczytaj dwie liczby typu REAL i oblicz:
// a) ich sume, roznice, iloczyn;
// b) ich iloraz; jesli dzielnik bedzie zerem
// wyprowadz te informacje na ekran
// c) sume ich odwrotnosci, jesli sa one obie rozne od zera,
// lub wyprowadz komunikat, ze operacja nie jest mozliwa do
// wykonania, jesli przynajmniej jedna z nich
// jest rowna zeru


main(){

float liczba1, liczba2;

printf("Podaj dwie dowolne liczby rzeczywiste: \n- liczba pierwsza: ");
scanf("%f", &liczba1);

printf("- liczba druga: ");
scanf("%f", &liczba2);

if (liczba1==0 || liczba2==0) {
        printf("\nPrzynajmniej jedna z podanych liczb to '0'. Nie moge zsumowac odwrotnosci.\n");
}
else {
        printf("\nSuma odwrotnosci liczb to: %f\n", 1/liczba1 + 1/liczba2);
}

}
