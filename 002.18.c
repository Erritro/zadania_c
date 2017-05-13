#include <stdio.h>
#include <math.h>

//Znajdz wszystkie podzielniki danej liczby naturalnej

int main(){

int n, i;

printf("Podaj dowolna liczbe naturalna: \n");
scanf("%d", &n);

printf("Podana liczba naturalna dzieli sie przez: \n");
for(i=1; i<=n; i++){
    if(n%i==0){
       printf("%d\n", i);
    }
}

printf("\n");


return 0;
}
