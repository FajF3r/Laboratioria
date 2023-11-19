#include <stdio.h>

int a,b;

    int exact(a,b){
        if (a==b)
        {
            printf("1");
        }else{
            printf("0");
        }
        
    }

int main()
{
    scanf("%d %d", &a, &b);
    exact(a,b);
    return 0;
}
