#include<stdio.h>
#include<string.h>

int main(){
    char st1[11];
    char st2[11];
    scanf("%s %s", st1,st2);
    printf("%d %d\n", strlen(st1), strlen(st2));
    printf("%s%s\n", st1,st2);
    int temp = st1[0];
    st1[0] = st2[0];
    st2[0] = temp;
    printf("%s %s\n", st1,st2);

    return 0; 
}