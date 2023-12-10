#include <stdio.h>

int glob;

    int addres(int *a, int b){
        printf("%p, %p", &a, &b);
    }

int main()
{
    int local;
    int *glob = &local;
    printf("%p %p", &glob,&local);
    addres(glob,local);
    return 0;
}
