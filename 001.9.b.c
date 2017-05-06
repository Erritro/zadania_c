#include <stdio.h>

// Wczytaj dwie liczby rzeczywiste i wyœwietl:
// a) wieksza z nich
// b) mniejsza z nich


main(){

float liczba1, liczba2;

printf("Podaj dwie dowolne rozne liczby rzeczywiste: \n- liczba pierwsza: ");
scanf("%f", &liczba1);

printf("- liczba druga: ");
scanf("%f", &liczba2);



if (liczba1<liczba2){
    printf("\nMniejsza liczba to: %.0f \n", liczba1);

    }

else {
    printf("\nMniejsza liczba to: %.0f \n", liczba2);
}

}


