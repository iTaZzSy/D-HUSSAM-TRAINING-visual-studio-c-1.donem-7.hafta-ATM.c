#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int restegle(int min,int max){
    int random;
    srand(time(NULL));
    random = rand() % (max - min + 1) + min;
    return random;

}

int main(){

int min,max,x;
scanf("%d",&min);
scanf("%d",&max);

x = restegle(min,max);

printf("%d",x);

}