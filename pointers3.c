#include <stdio.h>

int main(){

int a, b, c, p;
//int *p;

a=10;
p=&a;
b=20;

printf("\nWartosc poczatkowa zmiennych: a = %d, p = %d, b = %d \n", a, p, b);

a=b;
c=&b;

printf("\nWartosc po 'a=b': a = %d, p = %d, b = %d \n", a, p, b);
printf("\nWartosc c = %d \n", c);
printf("\nWartosc c = %p \n", c);

printf("\nAdres a = %p \n", &a);
printf("\nAdres b = %p \n", &b);

printf("\nWartosc poczatkowa zmiennych: a = %d, p = %d, b = %d \n", a, p, b);

printf("Zmienna p (wskazuje adres a): %p \n", p);

p=b;
printf("Zmienna p (wskazuje adres a): %d \n", p);
printf("Wartosc zmiennej p po '*p=b': %d \n", p);
printf("Wartosc zmiennej p po '*p=b': %d \n", p);

printf("\nWartosc zmiennej a po '*p=b': %d \n", a);

}
