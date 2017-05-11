#include <stdio.h>
#include <math.h>

//Oblicz pole powierzchni:
//a) dowolnego trojkata [ 1/2 (bok a + bok b + bok c) ]
//b) kwadratu (bok * bok)
//c) prostokata (bok a * bok b)
//d) kola,
// Dane sa odpowiednio boki lub promien

int main(){

int bok_a, bok_b, bok_c, bok;
float promien;

printf("Podaj dlugosc boku a trojkata rownobocznego: ");
scanf("%d", &bok_a);
printf("Podaj dlugosc boku b trojkata rownobocznego: ");
scanf("%d", &bok_b);
printf("Podaj dlugosc boku c trojkata rownobocznego: ");
scanf("%d", &bok_c);

printf("Pole trojkata wynosi %f \n\n", 0.5*(bok_a+bok_b+bok_c));

printf("Podaj dlugosc boku kwadratu: ");
scanf("%d", &bok);
printf("Pole kwadratu wynosi %d \n\n", bok*bok);

printf("Podaj dlugosc pierwszego boku prostokata: ");
scanf("%d", &bok_a);
printf("Podaj dlugosc drugiego boku prostokata: ");
scanf("%d", &bok_b);
printf("Pole prostokata wynosi %d \n\n", bok_a*bok_b);

printf("Podaj promien kola: ");
scanf("%f", &promien);
printf("Pole kola wynosi %Lf \n\n", M_PI*pow(promien, 2));

return 0;
}
