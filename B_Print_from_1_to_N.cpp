#include<stdio.h>

void printR(int n){
    if (n ==0) return;
    printR(n-1);
    printf("%d\n", n);
}


int main(){
    int n; 
    scanf("%d", &n);
    printR(n);
    return 0; 
}