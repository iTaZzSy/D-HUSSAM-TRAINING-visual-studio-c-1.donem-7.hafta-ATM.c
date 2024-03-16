#include<stdio.h>
int findmax(int arr[],int size){
    if(size == 1){
        return arr[0];
    }
    else{
        int enb = findmax(arr + 1,size - 1);
        return (arr[0] > enb) ? arr[0] : enb;
    }
}

int main(){
    int arr[5],size = 5;
    for(int i =0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",findmax(arr,size));
}