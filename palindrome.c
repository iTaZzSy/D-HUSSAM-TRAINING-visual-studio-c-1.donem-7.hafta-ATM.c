#include<stdio.h>

int main(){

    int num,d,rev = 0,a;
    scanf("%d",&num);
    a = num;

    while (num > 0)
    {
        d = num % 10;
        rev = rev * 10 + d;
        num = num / 10;
    }
    if (a == rev){
        printf("its palindrome number : %d",rev);

    }
    else
    printf("its not palindrome number : %d",rev);



}