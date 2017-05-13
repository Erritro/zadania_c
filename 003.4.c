#include <stdio.h>


//Dana jest liczba naturalna n oraz liczby rzeczywiste
//a1, ..., an.
//Wyprowadz te liczby na ekran w odwrotnej kolejnosci

int n, i;
float liczba;


int main(){

printf("Ile liczb rzeczywistych chcesz wprowadzic?\n");
scanf("%d", &n);

float liczby[n];

for(i=0;i<n;i++){
    printf("Podaj liczbe %d: ", i+1);
    scanf("%f", &liczba);
    liczby[i]=liczba;
}

printf("\n\nWprowadziles nastepujace liczby: \n");

for(i=0;i<n;i++){
    printf("%.2f\t", liczby[i]);
    }

printf("\n\nOdwrotna kolejnosc: \n");


for(i=n-1;i>=0;i--){
    printf("%.2f\t", liczby[i]);
    }

printf("\n");
return 0;
}

