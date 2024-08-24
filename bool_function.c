#include <stdio.h>
#include <stdbool.h>

bool ifis_prime(int n){
    bool esiste_prime = (n <2);
    for (int i = 2; i < n && !esiste_prime; ++i) {
        if(n % i == 0)
            esiste_prime = true;
    }
    return !esiste_prime;
}

int main(void){
    for (int i = 0; i < 100; ++i) {
        if(ifis_prime(i))
            printf("%d ", i);

    }
    puts("");

}