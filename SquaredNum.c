#include<stdio.h>

int main(){
    int b[10];
    for(int i = 0; b[i] != -1;){
        i++;
        scanf("%d",&b[i]);
        printf("%d ==== %d\n",b[i],b[i]*b[i]);
    }

}