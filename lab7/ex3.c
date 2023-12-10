#include <stdio.h>

    void fun(int *a,int *b){
        printf("%p,%p", a==b,b==a );

    }

int main()
{
    int a = 7;
    int b = 12;
    printf("%d,%d \n", a, b);
    fun(a,b);
}
