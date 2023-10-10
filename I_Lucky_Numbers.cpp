#include<stdio.h> 

int main(){
    int b;
    scanf("%d", &b);
    int lastDig = b%10;
    int c = b/10;
    if (c%lastDig == 0 || lastDig%c==0){
        printf("YES");
    }else {
        printf("NO");
    }
    return 0;
}

