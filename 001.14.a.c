#include <stdio.h>
#include <ctype.h>
#include <string.h>


// Napisz program, ktory pozwala wprowadzac z klawiatury
// jedynie cyfry (nie reaguje na inne klawisze) i ciag
// tych cyfr jako liczbe przypisuje do zmiennej typu WORD

// Uwaga: typu WORD nie ma w C, to zadanie z Pascala
// Rozumiem, ze kolejne cyfry jako lancuch tekstowy
// maja skladac sie na liczbe



int main(){

char cyfra, liczba[100];
int i=0;

liczba[0] = '\0'; //'zeruje' poprzednia zawartosc - przy kilku wywolaniach programu

printf("Wprowadz ciag cyfr. Program nie reaguje na inne klawisze.\n");
printf("Aby zakonczyc wprowadzanie cyfr nacisnij \'x\'.\n");

while(cyfra!='x'){
    cyfra = getch();
    if(isdigit(cyfra)){
        printf("%c", cyfra);
        liczba[i]=cyfra;
        i++;
    }
}

printf("\nWprowadzona liczba to %s \n", liczba);

return 0;
}
