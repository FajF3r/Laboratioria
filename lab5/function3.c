#include <stdio.h>

    char exactChar(char s,int i){
        return (i>=0 && i<strlen(s)) ? s[i]: "blad";
    }

int main(s,i)
{
    char str[] = "loremipsum";
    int index = 3;
    char result = exactChar(str, index);

    printf("%d : %c/n", index, result);
}
