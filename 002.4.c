#include <stdio.h>
#include <math.h>

//Oblicz pole powierzchni:
//a) dowolnego trojkata [ 1/2 (bok a + bok b + bok c) ]
//b) kwadratu (bok * bok)
//c) prostokata (bok a * bok b)
//d) kola, gdy znany jest jego promien
// Dane sa odpowiednio boki lub promien

int main(){

int bok_a, bok_b, bok_c, bok;
float pole;

printf("Podaj dlugosc boku trojkata rownobocznego: ");
scanf("%d", &bok);
printf("Obwod trojkata rownobocznego wynosi %d \n\n", bok*3);

printf("Podaj dlugosc boku kwadratu: ");
scanf("%d", &bok);
printf("Obwod kwadratu wynosi %d \n\n", bok*4);

printf("Podaj dlugosc pierwszego boku prostokata: ");
scanf("%d", &bok1);
printf("\nPodaj dlugosc drugiego boku prostokata: ");
scanf("%d", &bok2);
printf("Obwod prostokata wynosi %d \n\n", bok1*2+bok2*2);

printf("Podaj promien okregu: ");
scanf("%Lf", &promien);
printf("Obwod okregu wynosi %Lf \n\n", 2*M_PI*promien);

return 0;
}
