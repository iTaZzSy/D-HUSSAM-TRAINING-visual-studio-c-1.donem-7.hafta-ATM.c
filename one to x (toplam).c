#include<stdio.h>

int one_to_x(int x){
    int toplam = 0;
    for(int i=1; i<=x; i++){

        toplam += i;
    }
    return toplam;
}

int main(){
    int n,z;

    scanf("%d",&n);
    z = one_to_x(n);

    printf("%d",z);
}