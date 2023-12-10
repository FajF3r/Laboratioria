# include <stdio.h>
int a,b,i;
#define n 8
int Arr[n];
int *ptra = &Arr[0];
int *ptrb = &Arr[n-1];

int sizeOf(int ptra,int ptrb){
    for (i = 0; i < n; i++)
    {
        Arr[i]=i;
        ptra++;
        printf("%d\n", ptra);
        
    }
    printf("size of array - %d\n", ptra);
}

int main()
{

    sizeOf(*ptra,*ptrb);
    return 0;
}
