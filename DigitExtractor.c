#include<stdio.h>

int main(){
    int a,b[5],c;

    do{
    scanf("%d",&a); //12345
    }
    while (a>100000);
    
    for(int i = 0; i <5 ; i++){
        c =a % 10; //5  4  3  2  1
        b[i] = c;
        a = a / 10;
        printf("%d %d\n",b[i],a);
    }
}