#include <stdio.h>


// Wczytaj znak z klawiatury.
// a) okresl czy to byla litera

// Program wczytuje kolejne znaki i sprawdza czy to sa litery.
// Wersja z wykorzystaniem funkcji scanf; widac wprowadzane znaki


main(){

char znak;

printf("Wcisnij dowolny klawisz na klawiaturze\n");
scanf("%c", &znak);

if(isalpha(znak)){
    printf("To jest litera\n\n");
}
else {
    printf("To nie jest litera\n\n");
}

}
