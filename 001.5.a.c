#include <stdio.h>

// wczytaj dwie liczby typu REAL i oblicz:
// a) ich sume, roznice, iloczyn;


main(){

float liczba1, liczba2;

printf("Podaj dwie dowolne liczby rzeczywiste: \n- liczba pierwsza: ");
scanf("%f", &liczba1);

printf("- liczba druga: ");
scanf("%f", &liczba2);

printf("\n");
printf("\nSuma liczb to: %f", liczba1+liczba2);
printf("\nRoznica liczb to: %f", liczba1-liczba2);
printf("\nIloczyn liczb liczb to: %f", liczba1*liczba2);
printf("\n");

}
