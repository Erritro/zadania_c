#include <stdio.h>

int main(){

int a, b;
int *p;

a=10;
p=&a;
b=20;

printf("Zmienna p (wskazuje adres a): %d \n", p);

*p=b;
printf("Zmienna p (wskazuje adres a): %d \n", p);
printf("Wartosc zmiennej p po '*p=b': %d \n", p);
printf("Wartosc zmiennej p po '*p=b': %d \n", *p);

printf("\nWartosc zmiennej a po '*p=b': %d \n", a);

}
