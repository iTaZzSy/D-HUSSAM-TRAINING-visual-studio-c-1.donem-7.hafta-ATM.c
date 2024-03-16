#include<stdio.h>

int main() {
    int temp, i, j;
    int list[9] = {5, 9, 4, 3, 2, 1, 6, 7, 8};

    for (i = 0; i < 8; i++) {
        for (j = i + 1; j < 9; j++) {
            if (list[i] > list[j]) {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }

    // Sıralanmış diziyi yazdırma
    for (i = 0; i < 9; i++) {
        printf("%d ", list[i]);
    }

    return 0;
}
