#include <stdio.h>
#include <math.h>

//Oblicz objetosc:
//a) szescianu
//b) prostopadloscianu
//c) stozka
//d) kuli
// Dane sa odpowiednio boki lub promien

int main(){

int bok_a, bok_b, bok_c, bok, wysokosc, promien;


printf("Podaj dlugosc boku szescianu: ");
scanf("%d", &bok);
printf("Objetosc szescianu wynosi %.2f \n\n", pow(bok,3)); //lub bok*bok*bok :)

printf("Podaj dlugosc boku a prostopadloscianu: ");
scanf("%d", &bok_a);
printf("Podaj dlugosc boku b prostopadloscianu: ");
scanf("%d", &bok_b);
printf("Podaj wysokosc prostopadloscianu: ");
scanf("%d", &bok_c);
printf("Objetosc prostopadloscianu wynosi %d \n\n", bok_a*bok_b*bok_c);

printf("Podaj wysokosc stozka: ");
scanf("%d", &wysokosc);
printf("Podaj promien podstawy stozka: ");
scanf("%d", &promien);
printf("Objetosc stozka wynosi %.2f \n\n", (M_PI*pow(promien,2)*wysokosc)/3);

printf("Podaj promien kuli: ");
scanf("%d", &promien);
printf("Objetosc kuli wynosi %.2f \n\n", (4/3)*M_PI*pow(promien,3));

return 0;
}
