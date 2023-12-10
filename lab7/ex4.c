#include <stdio.h>

int temp;
int tab[3]={1,5,2};
int *ptr = &tab[0];

int maxNum(int ptr,int tab[]){
    int i;
    for (i = 0; i < 3; i++)
    {
        if (tab[i]<tab[i+1])
        {
            temp = tab[i+1];
                        
        }else if (tab[i]>tab[i+1])
        {
            temp = tab[i];
        }else{
            i++;
        }
        i++;
        printf("%d\n", temp);

    }
}

int main()
{
    maxNum(*ptr,tab);
    return 0;
}
