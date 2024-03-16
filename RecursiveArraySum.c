#include<stdio.h>
int top(int a[],int i,int j){
    if(i==j){
        return 0;
    }
    else{
        return(a[j] + top(a,i,j+1));
    }
}
int main(){
    int a[4],k,j=0, i;
    for(i=0 ; i<4; i++){
        scanf("%d",&a[i]);
    }
    printf("toplam : %d",top(a,i,j));
}