#include <stdio.h>


// komentarz


main(){

char imie[10];
char jedzenie[15];
char zdanie[30]=""; // jesli sie nie zainicjuje zmiennej tu, na poczatku zdania sa smieci
int result;

puts("Jak ma na imie?");
gets(imie);
puts("Co lubi jesc?");
gets(jedzenie);

strcat(zdanie, imie);
strcat(zdanie, " lubi jesc ");
strcat(zdanie, jedzenie);


printf("\n%s \n", zdanie);

puts

}
