#include<stdio.h>

int main() {
    int i, n, sayisi = 0, j;
    char s[40], sesli_harf[] = {'i', 'a', 'e', 'u', 'o'};
    
    printf("ne yazmak istiyorsunuz :");
    gets(s);   //hussam
    
    for (n = 0; s[n] != '\0'; n++);
    for (i = 0; i < n; i++) {
        j = 0;
        while (j < 5) {
            if (s[i] == sesli_harf[j]) {
                sayisi++;
                j++;
            }
        }
    }
    printf("karakter sayisi : %d\n", n);
    printf("sesli harflar sayisi : %d\n", sayisi);
    return 0;
}
