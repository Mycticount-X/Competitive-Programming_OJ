#include <stdio.h>

int main () {
    int num;
    scanf("%d", &num);
    if (num % 2 == 1) printf("ODD\n");
    else printf("EVEN\n");
    return 0;
}