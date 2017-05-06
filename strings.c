#include <stdio.h>


// komentarz


main(){

char tekst[] = "To jest dosc dlugi tekst";

tekst[] = "Drugi tekst";

printf("\n Zmienna tekst: %s \n", tekst);


printf("\n Wpisz nowy tekst: \n");
scanf("%s", tekst);

printf("\n Nowy tekst: %s \n", tekst);

puts("\nPodaj nowy tekst: ");
gets(tekst);

printf("\n Najnowszy tekst: %s \n", tekst);




}
