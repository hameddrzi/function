#include <stdio.h>
#include <stdbool.h>


int cambio(int prezzo, int monete){
    int cambio = prezzo / monete;
    int resto = prezzo % monete;

    if(cambio > 0){
        printf("%d da %d cent\n", cambio, monete);
    }
    return resto;
}


int main(){
    int cent;
    printf("insert moente: ");
    scanf("%d", &cent);
    #define NUM_CENT 6
    const int monete[NUM_CENT] = {1, 2, 5, 10, 20, 50};

    for (size_t i = NUM_CENT ; i >0 ; --i) {
        cent = cambio(cent, monete[i-1]);

    }
}
