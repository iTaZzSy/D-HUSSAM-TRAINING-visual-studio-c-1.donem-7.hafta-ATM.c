#include<stdio.h>

int main(){
    int n,k = 0,b = 0,top = 0,ortb,i,j,a[10][2];
    for(i = 0;i<10;i++){
            scanf("%d",&b);
            a[i][0] = b;
            scanf("%d",&k);
            a[i][1] = k;
            top += b;
        }
            ortb = top / 10;
            printf("ortalama boy : %d",ortb);
    }