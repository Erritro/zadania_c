#include <stdio.h>


//Wydrukuj tabliczke mnozenia od 1 do 100



int main(){

int wiersz, kolumna;

for(wiersz=1;wiersz<=10;wiersz++){
        for(kolumna=1;kolumna<=10;kolumna++){
            printf("%d\t", wiersz*kolumna);
        }
        printf("\n");
}





return 0;
}

