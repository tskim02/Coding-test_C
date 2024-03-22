#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char str[LEN_INPUT];
    int a;
    scanf("%s %d", str, &a);
    for(int i = 0; i < a; i++) {
        printf("%s", str);
    }
    return 0;
}