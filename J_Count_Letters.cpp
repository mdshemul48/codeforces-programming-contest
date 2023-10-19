#include <stdio.h>
#include <string.h>

int main()
{

    int count[26] = {0};
    char in; 
    while(scanf("%c", &in) != EOF){
        count[in-'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c : %d\n", i + 'a', count[i]);
        }
    }
    return 0;
}