#include <stdio.h>
#include <math.h>

//Napisz program realizujacy odejmowanie 2 liczb naturalnych
//przy czym odjemnik jest mniejszy od odjemnej,
//jesli (przy zalozeniu?), ze na komputerze mozliwe jest
//tylko dodawanie i operacje logiczne typu sprawdzenia
//czy a=b, a>b, a<b.

int a, b;


int main(){

printf("Podaj dwie liczby naturalne.\n");
printf("Pierwsza liczba: ");
scanf("%d", &a);
printf("Druga liczba: ");
scanf("%d", &b);

if(a<b){
    b = -b;
    printf("Roznica wynosi %d \n", abs(a+b));
}

else if(a>b){
    a = -a;
    printf("Roznica wynosi %d \n", abs(a+b));
}

else {
    printf("\nLiczby sa rowne\n");
}


return 0;
}
