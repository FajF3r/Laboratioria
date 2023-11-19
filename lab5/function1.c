#include <stdio.h>

int a,b,c;

int calcA (a,b){
    printf("%d/n", a+b);
}
int calcB (a,b){
    printf("%d/n", a-b);
}
int calcC (a,b){
    printf("%d/n", a*b);
}
int calcD (a,b){
    printf("%d/n", a/b);
}

int main()
{
    scanf("%d %d %d",&a, &b, &c);
    switch (c){
    case 1:
        calcA(a,b);
        break;
    case 2:
        calcB(a,b);
        break;
    case 3:
        calcC(a,b);
        break;
    case 4:
        calcD(a,b);
        break;
    
    default:
        break;
    }
    return 0;
}
