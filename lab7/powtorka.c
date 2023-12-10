#include <stdio.h>

int n = 100;

int main(int argc, char const *argv[])
{
    int Arr[10];
    int a,i;
    while (1==1)
    {
        printf(" 0 - zakoncz \n 1 - wypisz elementy \n 2 - czy jest miejsce \n 3 - usun indeks \n 4 - suma cyfr \n 5 - wyswietl drzewo\n");
        scanf("%d", &a);
        switch (a)
        {
        case 0:
            return 0;
            break;
        case 1:
            if (n==0)
            {
                printf("error");
            }else{
                for (i = 0; i < 10; i++)
                {
                    Arr[i]=i;
                    printf(" %d", Arr[i]);
                }
                printf(" \n");
            }
            
            break;
        
        default:
            break;
        }
    }
    
    return 0;
}
