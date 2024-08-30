#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool pali(const char *str){
    size_t len = strlen(str);
    bool palindroma = true;
    for (size_t i = 0; i < len/2 && palindroma; ++i) {
        if(str[i] != str[len - i  - 1]  )
            palindroma = false;
    }
    return palindroma;
}

#define MAX 50
int main() {
    char word[MAX+1];
    scanf("%50s", word);

    if(pali(&word))printf("palindroma");
    else printf("NOT palindroma");
}
