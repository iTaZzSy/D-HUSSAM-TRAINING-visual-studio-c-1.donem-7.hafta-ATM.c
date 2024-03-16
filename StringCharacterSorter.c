#include <stdio.h>

int main() {
    char str[40], temp;
    int n;

    // Get input string
    printf("Enter a string: ");
    gets(str);

    // Calculate the length of the string
    for (n = 0; str[n] != '\0'; n++);

    // Bubble sort algorithm to sort characters in the string
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    // Print sorted string
    printf("Sorted string: %s\n", str);

    return 0;
}
