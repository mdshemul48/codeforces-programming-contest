#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t; 
    long long int m,a,b,c;
    scanf("%d", &t);
    while(t--){
        scanf("%lld %lld %lld %lld", &m,&a,&b,&c);
        if (m%(a*b*c) == 0){
        printf("%lld\n", m/(a*b*c));
        }else {
            printf("-1\n");
        }
    }  
    return 0;
}