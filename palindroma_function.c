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

void invertt(char *word, char *invert){
    size_t len = strlen(word);
    for (int i = 0; i < len; ++i) {
        invert[i]= word[len - i - 1];

    }
    invert[len] = '\0';
}

#define MAX 50
int main() {
    char word[MAX+1], invert[MAX+1];
    scanf("%50s", word);

    if(pali(&word)){printf("palindroma");}
    else{
        invertt(&word, &invert);
        printf("%s", invert);

    }
}
