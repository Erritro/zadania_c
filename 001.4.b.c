#include <stdio.h>

// wczytaj liczbe typu REAL z klawiatury a nastepnie wydrukuj:
// a) te liczbe;
// b) liczbe przeciwna do danej

//Liczba przeciwna do danej liczby to taka liczba ¿e zachodzi:
//gdzie jest elementem zerowym dzia³ania dodawania.
//Przyk³ad: liczb¹ przeciwn¹ do liczby 3 jest liczba -3.

main(){

float liczba, liczba_przeciwna;

printf("Podaj dowolna liczbe rzeczywista: \n");
scanf("%f", &liczba);

liczba_przeciwna = liczba - 2*liczba;

printf("\nLiczba przeciwna to: %f", liczba_przeciwna);

}
