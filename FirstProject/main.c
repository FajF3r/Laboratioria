#include <stdio.h>
#include <stdlib.h>



    int a;
    int b;
    int c;

        int mathOperations(a,b){
            printf("%d\n",a+b);
            printf("%d\n",a-b);
            printf("%d\n",a*b);
            printf("%d\n",a/b);
            printf("%d\n",a%b);
            return 0;
        }

        void mathBig(int a, int b){
            if (a>b){
                printf("%d", a);
            }else{
                printf("%d", b);
                }
        }

        int mathbigg(int a,int b,int c){
        if (a>b && a>c){
            printf("%d", a);
        }else if(b>a && b>c){
            printf("%d"c b);
        }else{
            printf("%d", c);
        }


int main(){

scanf("%d %d",&a, &b);
mathbigg(a,b);
//mathOperations(a,b);
//mathBig(a,b);

}
