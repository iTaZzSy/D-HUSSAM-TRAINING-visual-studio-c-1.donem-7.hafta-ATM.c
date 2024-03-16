#include<stdio.h>
int main (){
    float b[8],ortalama,toplam = 0;
    int i;
    for (i = 0; i < 8 ; i++){
        scanf("%f",&b[i]);
        toplam +=b[i];
    }
    printf("total : %f",toplam);
    ortalama = toplam / i+1;
    printf("\naverage : %f",ortalama);
}