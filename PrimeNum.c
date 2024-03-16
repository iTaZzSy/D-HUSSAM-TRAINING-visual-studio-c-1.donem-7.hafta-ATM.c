#include<stdio.h>

int asal_sayi(int n){
    int i;
    for(i=2 ; i <= n/2 ; i++){
        if(n%i==0){
            printf("asal sayi degildir");
            return 0;
        }
    }
    printf("asal sayidir");
}

int main(){
    int n;

    scanf("%d",&n);
    asal_sayi(n);

}