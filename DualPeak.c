#include <stdio.h>

void second_largest(int a[], int size) {
    int largest1, largest2;

    if (size < 2) {
        printf("Hata: Dizi en az iki eleman içermelidir.\n");
        return;
    }

    largest1 = a[0];
    largest2 = a[1];

    for (int j = 0; j < size; j++) {
        if (a[j] > largest1) {
            largest2 = largest1;
            largest1 = a[j];
        } else if (a[j] > largest2 && a[j] != largest1) {
            largest2 = a[j];
        }
    }

    printf("En büyük 1. eleman: %d, En büyük 2. eleman: %d\n", largest1, largest2);
}

int main() {
    int a[10], i;

    printf("10 eleman giriniz: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    second_largest(a, 10);
    return 0;
}
