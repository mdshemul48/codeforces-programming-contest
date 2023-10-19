#include<stdio.h>
#include<string.h>

int main(){
    int n, m; 
    scanf("%d %d",&n,&m);
    int count[m+1] = {0};
    for (int i = 0; i<n; i++){
        int in;
        scanf("%d",&in);
        count[in]++;
    }
    for (int i =1; i<=m; i++){
        printf("%d\n", count[i]);
    }
    return 0; 
}