#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i, x;
int tab[];
    void exSec(double a, double b){
        for(i=1;i<=b;i++){
            printf("%d\n", a*i);
        }
    }

    void exThird(int a, int b){
        for(i=1;a<=b;i++){
            double pow(a, i);
        }
    }

    void exFourth(int a, int b, int c){
        int tab[3] = {a,b,c};
        for(i=0;i<=3;i++){
            printf("%d\n", tab[i]);
        }
    }

    void exFifth(int a){
        for(i=1;i<=a;i++){
            printf("podaj liczbe: ");
            scanf("%d", x);
            tab[i] = x;
        }
    }
int main()
{
 /**   int n = 4;
    int i, w;
    for(i=1; i<=n; i++){
        printf("%d\n", i*i);
    }
    return 0;
**/

//exSec(2,3);
//exThird(2,40);
//exFourth(1,3,5);
//exFifth(3);
    }
