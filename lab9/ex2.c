#include<stdio.h>

     struct point
     {
        int a;
        int b;
     };

int main()
{    
    struct point a1;
    a1.a = 5;
    a1.b = 4;

    printf("%d%d", a1.a,a1.b);
}
