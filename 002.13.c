#include <stdio.h>
#include <math.h>

//Okresl ilosc setek w zadanej liczbie naturalnej n>99

int main(){

int liczba, ilosc_setek;

printf("Podaj liczbe naturalna wieksza od 99: \n");
scanf("%d", &liczba);
printf("\n");

ilosc_setek = floor(liczba/100);
printf("Ilosc setek %d", ilosc_setek);




return 0;
}
