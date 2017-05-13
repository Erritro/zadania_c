#include <stdio.h>
#include <math.h>

//Sprawdz podzielnosc wczytanej liczby naturalnej n
//przez zadana liczbe naturalna k

int main(){

int n, k;

printf("Podaj dowolna liczbe naturalna: \n");
scanf("%d", &n);
printf("\nPodaj druga dowolna liczbe naturalna: \n");
scanf("%d", &k);
printf("\n");

if(n%k==0){
printf("\nPodana liczba %d jest podzielna przez %d", n, k);
}
else {
printf("\nPodana liczba %d nie jest podzielna przez %d.", n, k);
}
printf("\n");


return 0;
}
