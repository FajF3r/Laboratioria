#include <stdio.h>

int main()
{
    int i;
    int tab[10];
    int *ptr = &tab[0];
    for (i = 0;i <=  10; i++)
    {
        scanf("podaj liczbe %d", ptr+i);
        i++;
    }
    for (i = 0; i <= 10; i++)
    {
        printf("tab[0] = %d \n", *ptr);
        ptr++;
        i++;
    }
    
    
    return 0;
}
