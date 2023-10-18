#include<stdio.h>
#include<string.h>

int main(){
    char st[1001];
    scanf("%s", st);
    int i = 0,j = strlen(st) -1; 
    while(i<j){
        if (st[i]!= st[j]){
            printf("NO");
            return 0; 
        }
        i++;
        j--;
    }
    printf("YES");
    return 0; 
}