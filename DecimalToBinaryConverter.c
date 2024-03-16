#include<stdio.h>

int binary(int x){
    if(x > 0){
    binary(x / 2);
    printf("%d",x % 2);
    }
}

int main(){
    int num;
    scanf("%d",&num);
    if(num < 0){
        return 1;
    }
    if(num == 0){
    printf("0");
    }
    else{
    binary(num);
    }
}