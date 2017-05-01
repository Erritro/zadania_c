#include <stdio.h>

// Wczytaj dwie liczby calkowite i wyswietl na ekranie wszystkie liczby zawarte miedzy tymi liczbami


main(){

int liczba1, liczba2, suma, roznica, i;

printf("Podaj dwie dowolne liczby calkowite: \n- liczba pierwsza: ");
scanf("%d", &liczba1);

printf("- liczba druga: ");
scanf("%d", &liczba2);



if (liczba1<liczba2){
    printf("\nLiczby pomiedzy liczba pierwsza a druga: \n");
    for(i=liczba1+1; i<liczba2; i++){
        printf("%d\n", i);
    }
}
else if (liczba1>liczba2){
    printf("\nLiczby pomiedzy liczba druga a pierwsza: \n");
    for(i=liczba2+1; i<liczba1; i++){
        printf("%d\n", i);
    }
}

else {
    printf("\nPodales te same liczby. Nie mozna podac liczb 'posrednich'\n");
}


}
