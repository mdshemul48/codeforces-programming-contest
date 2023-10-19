#include<stdio.h>
#include<string.h>

int main(){
    int n; 
    char str[1000001];
    scanf("%d %s", &n, str);
    long long int sum = 0; 
    for (int i = 0; i<n; i++){
        sum+= str[i]-'0';
    }

    printf("%d", sum);

    return 0;
}