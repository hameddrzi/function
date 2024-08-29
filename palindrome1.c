#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX 50
int main(){
    char a[MAX+1];
    char b[MAX+1];
    b[MAX+1] = a[MAX+1];

    bool palindrome = true;

    scanf("%50s", a);
    for (size_t i = 0; i = MAX; ++i) {
        for (size_t j = 0; j = MAX; --j) {
            if(!(a[i])== b[j-1])
                palindrome = false;
        }

    }
    printf("palindrome", palindrome);

}