#include <stdio.h>
#include <math.h>

//Wczytaj n kolejnych liczb rzeczywistych i wybierz spoœród nich liczbê:
// a) najwiêksz¹
// b) najmniejsz¹

int main(){

int n, i;
float liczba, najwieksza, najmniejsza;


printf("Podaj ilu liczb rzeczywistych bedzie dotyczylo porownanie: ");
scanf("%d", &n);

float liczby[n];

for(i=0;i<n;i++){
    printf("\nPodaj liczbe %d: ", i+1);
    scanf("%f", &liczba);
    liczby[i]=liczba;

}

najwieksza = liczby[0];
najmniejsza = liczby[0];

for(i=0;i<n;i++){
    if(liczby[i]>najwieksza){
        najwieksza = liczby[i];
    }
    if(liczby[i]<najmniejsza){
        najmniejsza = liczby[i];
    }
}

printf("Najwieksza liczba to: %.2f\n", najwieksza);
printf("Najmniejsza liczba to: %.2f\n", najmniejsza);

return 0;
}
