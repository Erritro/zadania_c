#include <stdio.h>

// wczytaj liczbe typu REAL z klawiatury a nastepnie wydrukuj:
// a) te liczbe;
// b) liczbe przeciwna do danej
// c) liczbe dwa razy wiêksz¹
// d) odwrotnosc danej liczby, jesli jest rozna od zera

main(){

float liczba;

printf("Podaj dowolna liczbe rzeczywista: \n");
scanf("%f", &liczba);

if (liczba==0){
    printf("\nNie mozna podac odwrotnosci dla liczby '0'\n");
}
else {
    printf("\nOdwrotnosc podanej liczby to: %f \n", 1/liczba);

}


}
