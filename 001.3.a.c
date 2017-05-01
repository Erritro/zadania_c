#include <stdio.h>

// wyswietl na ekranie 32 gwiazdki "*" ulozone w szachownice 8x8 pol na przemian ze znakiem spacji;

main(){

int i, i2;
//char z = "*", spacja = "s";

for (i=1; i<=8; i++){
    for (i2=1; i2<=8; i2++) {
            printf("%s%s", "*", " ");

    }
    printf("\n");
}
}
