#include<stdio.h>
int fun(int arr[],int n){
    int x;
    if(n%2==0){
        return arr[(n/2)]+arr[(n/2-1)];
    }
    else{
        return arr[n/2];
    }
}

int main(){
    int arr[] = {12,10,300,50,100};

    printf("%d",fun(arr,5));
    
}