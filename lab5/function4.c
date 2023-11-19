#include <stdio.h>
char str;

    int isPalindrom(char *str){
        int length = strlen(str);
        for(int i = 0; i < length / 2; i++){
            if (str[i] != str[length -i -1]){
                return 0;
            }
            {
            }
        return 1;    
        }
    }

int main()
{
    char word[kajak];

    scanf("%s", word);

    if (isPalindrom(word)){
        printf("%s jest palindromem\n", word);
    }else{
        printf("%s nie jest palindromem\n", word);
    }
    
    return 0;
}
