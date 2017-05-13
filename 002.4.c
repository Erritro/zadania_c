#include <stdio.h>
#include <math.h>

//Oblicz przebyta droge w ruchu jednostajnym
//jesli znane sa wartosci czasu i predkosci

int main(){

int czas, predkosc;

printf("Obliczanie drogi w ruchu jednostajnym\n\n");
printf("Podaj czas (w sekundach): ");
scanf("%d", &czas);
printf("\nPodaj predkosc (metrach na sekunde): ");
scanf("%d", &predkosc);
printf("\n");
printf("Przebyta droga to: %d (metrow)\n\n", czas*predkosc);



return 0;
}
