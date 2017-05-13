#include <stdio.h>
#include <math.h>

//Sprawdz czy wczytane trzy liczby rzeczywiste, dodanie a, b, c
//moga tworzyc trojkat, tzn, czy spelnione sa
//jednoczesnie relacje a<b+c, b<c+a, c<b+a

int main(){

int a, b, c;

printf("Podaj dlugosc pierwszego boku: ");
scanf("%d", &a);
printf("Podaj dlugosc drugiego boku: ");
scanf("%d", &b);
printf("Podaj dlugosc trzeciego boku: ");
scanf("%d", &c);

if(a<b+c && b<c+a && c<b+a){
printf("\nPodane dlugosci bokow %d, %d, %d moga tworzyc trojkat", a, b, c);
}
else {
printf("\nPodane dlugosci bokow %d, %d, %d nie moga utworzyc trojkata.", a, b, c);
}
printf("\n");


return 0;
}
