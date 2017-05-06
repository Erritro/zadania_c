#include <stdio.h>


// Wczytaj znak z klawiatury.
// a) okresl czy to byla litera
// b) wyswietla na ekanie nastepny znak (wg kodu ASCII)
// c) Wyswietla na ekranie kod ASCII danego znaku


main(){

char znak;

printf("Wcisnij dowolny klawisz na klawiaturze\n");
scanf("%c", &znak);

printf("Kod ASCII znaku %c to %i", znak, znak);

}
