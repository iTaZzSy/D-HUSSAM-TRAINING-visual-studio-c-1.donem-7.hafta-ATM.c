#include<stdio.h>
int obeb(int x,int y){
    if(y==0){
        return x;
    }
    else{
    return (obeb(y,x%y));
    }
}
int main(){
    int x,y;
    scanf("%d %d",&x,&y); //9 18
    printf("ebob : %d",obeb(x,y));
    
    return 0;
}