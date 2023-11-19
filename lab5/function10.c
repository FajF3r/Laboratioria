#include <stdio.h>

int m,r;

void howManyDays(int m, int r){
    if (r%4==0){
        if (m == 1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
            printf("31 dni");
        }else if(m==4 || m==6 || m==9 || m==11){
            printf("30 dni");
        }else{
            printf("29 dni");
        }
    }else{
        if (m == 1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
            printf("31 dni");
        }else if(m==4 || m==6 || m==9 || m==11){
            printf("30 dni");
        }else{
            printf("28 dni");
        }
    }
    
}

int main(){
    howManyDays(2,2002);
    return 0;
}
