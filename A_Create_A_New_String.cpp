#include<stdio.h> 
#include<string.h>

int main(){
    char st[(int)10e4];
    char s2[(int)10e4];
    scanf("%s %s", &st, &s2);
    int len1 = strlen(st);
    int len2 = strlen(s2);
    printf("%d %d\n", len1, len2);
    printf("%s %s", st,s2)
;    return 0;
}