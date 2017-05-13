#include <stdio.h>


//Wprowadz z klawiatury n liczb naturalnych i przypisz je kolejnym
//elementom tablicy

int n, i, liczba;


int main(){

printf("Ile liczb naturalnych chcesz wprowadzic?\n");
scanf("%d", &n);

int liczby[n];

for(i=0;i<n;i++){
    printf("Podaj liczbe %d: ", i+1);
    scanf("%d", &liczba);
    liczby[i]=liczba;
}

printf("\n\nWprowadziles nastepujace liczby: \n");

for(i=0;i<n;i++){
    printf("%d\n", liczby[i]);
    }

return 0;
}

