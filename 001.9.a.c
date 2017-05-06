#include <stdio.h>

// Wczytaj dwie liczby rzeczywiste i wyœwietl:
// a) wieksza z nich


main(){

float liczba1, liczba2;

printf("Podaj dwie dowolne rozne liczby rzeczywiste: \n- liczba pierwsza: ");
scanf("%f", &liczba1);

printf("- liczba druga: ");
scanf("%f", &liczba2);



if (liczba1<liczba2){
    printf("\nWieksza liczba to: %.0f \n", liczba2);

    }

else {
    printf("\nWieksza liczba to: %.0f \n", liczba1);
}

}


