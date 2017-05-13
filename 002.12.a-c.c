#include <stdio.h>
#include <math.h>

//Sprawdz czy wczytana liczba naturalna jest:
// a) dodatnia
// b) parzysta
// c) podzielna przez 3

int main(){

int liczba;

printf("Podaj liczbe naturalna: \n");
scanf("%d", &liczba);
printf("\n");

if(liczba>0){
    printf("Podana liczba jest dodatnia.\n");
}
else {
    printf("odana liczba jest ujemna lub rowna \'0\'.\n");
    }

if(liczba%2==0){
    printf("Podana liczba jest parzysta.\n");
}
else {
    printf("Podana liczba jest nieparzysta.\n");
}

if(liczba%3==0){
    printf("Podana liczba jest podzielna przez 3.\n");
}
else {
    printf("Podana liczba nie dzieli sie przez 3.\n ");
}

printf("\n");


return 0;
}
