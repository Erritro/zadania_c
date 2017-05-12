#include <stdio.h>
#include <math.h>

//Wczytaj n kolejnych liczb rzeczywistych i oblicz:
// a) ich sume
// b) rednia arytmetyczna
// c) sume odwrotnosci
// d) sume kwadratow tych liczb

int n=0, i=0;
float suma=0, liczba=0, srednia=0;

float suma_elementow(float liczby[], int n);
float srednia_arytmetyczna(float liczby[], int n);
float suma_odwrotnosci(float liczby[], int n);
float suma_kwadratow(float liczby[], int n);

int main(){

printf("Podaj ilu liczb rzeczywistych beda dotyczyly obliczenia: ");
scanf("%d", &n);

float liczby[n];

for(i=0;i<n;i++){
    printf("\nPodaj liczbe %d: ", i+1);
    scanf("%f", &liczba);
    liczby[i]=liczba;

}

printf("Suma elementow to: %.2f\n", suma_elementow(liczby, n));
printf("Srednia arytmetyczna to: %.2f\n", srednia_arytmetyczna(liczby, n));
printf("Suma odwrotnosci to: %.2f\n", suma_odwrotnosci(liczby, n));
printf("Suma kwadratow to: %.2f\n", suma_kwadratow(liczby, n));

return 0;
}

float suma_elementow(float liczby[], int n){
    suma = 0;
    for(i=0;i<n;i++){
        suma = suma+liczby[i];
    }
    return suma;
}

float srednia_arytmetyczna(float liczby[], int n){
    suma = 0;
    for(i=0;i<n;i++){
        suma = suma+liczby[i];
    }
    return suma/n;

}

float suma_odwrotnosci(float liczby[], int n){
    suma = 0;
    for(i=0;i<n;i++){
        suma = suma+(1.0/liczby[i]);
    }
    return suma;
}

float suma_kwadratow(float liczby[], int n){
    suma = 0;
    for(i=0;i<n;i++){
        suma = suma+(pow(liczby[i],2));
    }
    return suma;
}


