#include <stdio.h>

// Wczytaj 3 liczby rzeczywiste i wyœwietl:
// a) najwieksza


main(){

float liczby[3], najwieksza = 0;
int indeks = 0, i;

printf("Podaj trzy dowolne rozne liczby rzeczywiste: \n- liczba pierwsza: ");
scanf("%f", &liczby[indeks]);
indeks++;

printf("- liczba druga: ");
scanf("%f", &liczby[indeks]);
indeks++;

printf("- liczba trzecia: ");
scanf("%f", &liczby[indeks]);


for(i=0;i<=indeks;i++){
        if(najwieksza<liczby[i]){
            najwieksza=liczby[i];
        }
}

printf("\nNajwieksza liczba to: %.0f \n", najwieksza);
}

