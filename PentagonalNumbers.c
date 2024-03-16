#include <stdio.h>

int main() {
    int pn, i;
    for (i = 0; i < 9; i++) {
        pn = i * (3 * i - 1) / 2;
        printf("%d\n", pn);
    }
    return 0; 
}
