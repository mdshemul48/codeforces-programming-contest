#include<stdio.h>
#include<string.h>

int main(){
    char st[(int)10e5+1];
    scanf("%s",&st);
  
    long long int count= 0;
    int  i = 0; 
    while(st[i] !='\0'){
        count+= st[i] - '0';
        i++;
    }
    printf("%d", count);
    return 0; 
}