#include <stdio.h>

// Niech program wyswietla "tak" lub "nie" w zaleznosci od tego
// czy nacisnieto klawisz <T> czy <N> (wielka lub mala litere)
// Na pozostale klawisze nie powinien reagowac.

// funkcja getch() pobiera jeden znak wpisany na klawiaturze i
// bez wciskania klawisza ENTER zwraca go (w tym programie przypisuje
// do zmiennej litera

// wyjscie z programu po wcisnieciu klawisza 'x'


main(){

char litera;

while(litera!='x'){

    litera = getch();

    switch(litera){
        case 't':
        printf("Tak\b\b\b");
        break;
        case 'T':
        printf("Tak\b\b\b");
        break;
        case 'n':
        printf("Nie\b\b\b");
        break;
        case 'N':
        printf("Nie\b\b\b");
        break;
}
}
printf("\b\b\bWcisnales 'x' - wyjscie z programu\n\n");
}
