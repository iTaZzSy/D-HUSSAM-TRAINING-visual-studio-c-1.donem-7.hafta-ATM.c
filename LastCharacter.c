#include<stdio.h>
void son_harf(char x[]);

int main(){
    char s[40];
    gets(s); 

    son_harf(s);
    }

void son_harf(char x[]){
    int i;
    for( i=0 ; x[i]!='\0'; i++){
        if(x[i] == ' '){
            printf("%c",x[i-1]);
        }
    }
    if (x[i] != ' ')
    {
        printf("%c",x[i-1]);
    }
}