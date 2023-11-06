#include<stdio.h>

void printR(int n){
    if (n == 1) {printf("%d", n);return;}
    printf("%d ", n);
    printR(n-1);
}


int main(){
    int n; 
    scanf("%d", &n);
    printR(n);
    return 0; 
}