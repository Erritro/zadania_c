#include <stdio.h>

// Wczytaj 3 liczby rzeczywiste i wyœwietl:
// a) najwieksza


main(){

float liczba1, liczba2, liczba3;

printf("Podaj trzy dowolne rozne liczby rzeczywiste: \n- liczba pierwsza: ");
scanf("%f", &liczba1);

printf("- liczba druga: ");
scanf("%f", &liczba2);

printf("- liczba trzecia: ");
scanf("%f", &liczba3);



if (liczba1>liczba2 && liczba2>liczba3){
    printf("\nNajwieksza liczba to: %.0f \n", liczba1);

    }

else if (liczba2>liczba1 && liczba1>liczba3){
      printf("\nNajwieksza liczba to: %.0f \n", liczba2);
}

else {
    printf("\nNajwieksza liczba to: %.0f \n", liczba3);
}
}


