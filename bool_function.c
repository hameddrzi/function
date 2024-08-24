#include <stdio.h>
#include <stdbool.h>

bool ifis_prime(int n){
    bool esiste_prime = (n <2);
    for (int i = 0; i < n && !esiste_prime; ++i) {
        if(n % i == 0)
            esiste_prime = true;
    }
}

int main(void){

}