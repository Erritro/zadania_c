#include <stdio.h>


// Wczytaj znak z klawiatury.
// a) okresl czy to byla litera

// Program wczytuje kolejne znaki i sprawdza czy to sa litery.
// Wersja z wykorzystaniem funkcji getch();


main(){

char znak;

while(znak!='x'){
    znak = getch();
    if(isalpha(znak)){
    printf("To jest litera\n");
    }

}

}
