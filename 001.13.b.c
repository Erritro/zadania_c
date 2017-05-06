#include <stdio.h>


// Wczytaj znak z klawiatury.
// a) okresl czy to byla litera
// b) wyswietla na ekanie nastepny znak (wg kodu ASCII)


main(){

char znak;

printf("Wcisnij dowolny klawisz na klawiaturze\n");
scanf("%c", &znak);

printf("Nastepny znak po %c wg ASCII to %c \n", znak, znak+1);

}
