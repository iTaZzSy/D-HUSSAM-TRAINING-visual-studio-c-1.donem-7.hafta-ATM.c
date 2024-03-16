#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int num = rand() % (2000 - 1000 +1) + 1000;

    printf("rand num : %d",num);

    return 0;
}