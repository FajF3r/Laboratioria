#include <stdio.h>

int a = 1;
int b = 2;
int c = 3;

int *ptra = &a;
int *ptrb = &b;
int *ptrc = &c;

int temp;
int set(int ptra,int ptrb, int ptrc){
    if (ptra>ptrb && ptra>ptrc)
    {
        if (ptrb>ptrc)
        {
            printf("%d,%d,%d",ptra,ptrb,ptrc);
        }else{
            printf("%d,%d,%d",ptra,ptrc,ptrb);
        }
    }else if (ptrb>ptra && ptrb>ptrc)
    {
        if (ptra>ptrc)
        {
            printf("%d,%d,%d",ptrb,ptra,ptrc);
        }else{
            printf("%d,%d,%d",ptrb,ptrc,ptra);
        }
    }else if (ptrc>ptrb && ptrc>ptra)
    {
        if (ptrb>ptra)
        {
            printf("%d,%d,%d",ptrc,ptrb,ptra);
        }else{
            printf("%d,%d,%d",ptrc,ptra,ptrb);
        }
    }     
}


int main()
{
    set(*ptra,*ptrb,*ptrc);
    return 0;
}
