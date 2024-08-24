#include <stdio.h>
#include <stdbool.h>


int cambio(int cent, int monete){
    int cambio = cent / monete;     // 50cent / last block of array[50] = 1
    int resto = cent % monete;      // 90cent % last block of array[50] = rest 40

    if(cambio > 0){
        printf("%d da %d cent\n", cambio, monete);
    }
    return resto;                   //return 40 in the main in the loop
}


int main(){
    int cent;
    printf("insert moente: ");
    scanf("%d", &cent);
#define NUM_CENT 6
    const int monete[NUM_CENT] = {1, 2, 5, 10, 20, 50};

    for (size_t i = NUM_CENT ; i >0 ; --i) {
        cent = cambio(cent, monete[i]);

    }
}
