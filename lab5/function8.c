#include <stdio.h>

void isDate(int a,int b,int c){
            if(a>=1 && a<=12 && b%2==0 && b>=1 && b<=31 && c>0){
                printf("poprawna data");
            }else if(a>=1 && a<=12 && b%2==1 && b>=1 && b<=31 && c>0){
                printf("poprawna");
            }else if(b==2 && a>28 && c%4==0){
                printf("bledna data");
            }else{
                printf("bledna data");
            }
        }

int main()
{
    isDate(11,3,2005);
    return 0;
}
