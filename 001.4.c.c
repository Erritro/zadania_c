#include <stdio.h>

// wczytaj liczbe typu REAL z klawiatury a nastepnie wydrukuj:
// a) te liczbe;
// b) liczbe przeciwna do danej
// c) liczbe dwa razy wiêksz¹

main(){

float liczba, liczba_dwa_razy_wieksza;

printf("Podaj dowolna liczbe rzeczywista: \n");
scanf("%f", &liczba);

liczba_dwa_razy_wieksza = 2*liczba;

printf("\nLiczba przeciwna to: %f", liczba_dwa_razy_wieksza);

}
