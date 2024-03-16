#include<stdio.h>

void sesli_char(char s[],char sesli_harf[]){
    int i,j;
    for( i = 0 ; s[i] != '\0';i++){
        for(j = 0 ; j<5 ; j++){
            if(s[i] == sesli_harf[j]){
                s[i] = '*';
                
            }
        }
    }
    printf("%s",s);
}
int main(){
    char s[40],sesli_harf[5]={'a','e','u','o','i'};
    gets(s);

    sesli_char(s,sesli_harf);
}