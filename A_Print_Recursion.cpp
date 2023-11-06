#include<stdio.h>

void printR(int n){
    if (n ==0) return;
    printf("I love Recursion\n");
    printR(--n);
}


int main(){
    int n; 
    scanf("%d", &n);
    printR(n);
    return 0; 
}