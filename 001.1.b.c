#include <stdio.h>
#include <string.h>

// pytanie glowne jaka szerokosc - liczbe znakow ma ekran;
// przyjmuje, ze 80 znakow

main(){

int szerokosc = 80, dlugosc_tekstu, lewy_margines;

char tekst = "To ja, Twoj IBM";
dlugosc_tekstu = strlen(tekst);

lewy_margines = szerokosc/2;

printf("%*s", lewy_margines, tekst);

}
