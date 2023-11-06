#include<stdio.h>



long long int sum(int n){
    if (n == 0) return 0;
    long long int i; 
    scanf("%lld", &i); 
    return sum(n-1)+i; 
}

int main(){
    int n; 
    scanf("%d", &n);
    printf("%lld", sum(n));
    return 0; 
}