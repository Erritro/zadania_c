#include <stdio.h>

// Napisz program, ktory zada wprowadzenia 10 liczb,
// a nastepnie je wczytuje i wyswietla na ekranie
// obok kazdej liczby odpowiednie slowo: 'dodatnia', 'ujemna' lub 'zero'

// Zmodyfikuj poprzedni program tak, aby najpierw wczytywa³
// ile bedzie wprowadzonych liczb, a nastêpnie wykonywal
// podana operacje dla tej ilosci wprowadzonych liczb


main(){

int ile, i;

printf("Ile liczb chcesz podac: ");
scanf("%d", &ile);

int liczby[ile];

printf("\nPodaj %d liczb(-y) calkowitych(-e). \n\n", ile);

for (i=0; i<ile; i++){
    printf("Podaj liczbe %d: ", i+1);
    scanf("%d", &liczby[i]);
}

printf("\n"); //separator

for (i=0; i<ile; i++){
    if(liczby[i]>0){
        printf("%d \t = dodatnia\n", liczby[i]);
        }
    else if(liczby[i]<0){
        printf("%d \t = ujemna\n", liczby[i]);
    }

    else if(liczby[i]==0){
        printf("%d \t = zero\n", liczby[i]);
    }

}
}

