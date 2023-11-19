#include <stdio.h>

void isLeapYear(int a){
            if(a%4==0){
                printf("jest przestepny");
            }else{
                printf("nie jest");
            }
        }

int main()
{
    isLeapYear(2003);
    return 0;
}
