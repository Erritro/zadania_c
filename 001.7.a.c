#include <stdio.h>

// Napisz program, ktory zada wprowadzenia 10 liczb,
// a nastepnie je wczytuje i wyswietla na ekranie
// obok kazdej liczby odpowiednie slowo: 'dodatnia', 'ujemna' lub 'zero'


main(){

int liczby[10], i;

printf("Podaj 10 liczb calkowitych. \n");

for (i=0; i<10; i++){
    printf("Podaj liczbe %d: ", i+1);
    scanf("%d", &liczby[i]);
}

printf("\n"); //separator

for (i=0; i<10; i++){
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

