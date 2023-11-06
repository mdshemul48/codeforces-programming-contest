#include<stdio.h>

void printR(int n, int i){
    if (i==n) return;
    int in; 
    scanf("%d", &in);

    printR(n, i+1);
    if (i%2 == 0) printf("%d ", in);
}


int main(){
    int n; 
    scanf("%d", &n);
    printR(n, 0);
    return 0; 
}