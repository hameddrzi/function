#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX 50
int main(){
    char str[MAX+1];

    scanf("%50s", str);
    size_t len = strlen(str);
    bool palindome = true;
    for (size_t i = 0; i <len /2 && palindome ; ++i) {
        if(str[i] != str[len - i - 1])
            palindome = false;
    }

       if(palindome)printf("palindroma");
       else printf("NOT palindroma");
}