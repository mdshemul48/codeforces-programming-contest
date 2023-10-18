#include<stdio.h>
#include<string.h>

int main(){
    char st[(int)10e5+1];
    gets(st);
    int i = 0; 
    while(st[i] !='\\'){
        printf("%c", st[i]);
        i++;
    }
    return 0; 
}