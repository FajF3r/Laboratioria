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

        void mathbigg(int a,int b,int c){
            if (a>b && a>c){
                printf("%d", a);
            }else if(b>a && b>c){
                printf("%d", b);
            }else{
                printf("%d", c);
            }
        }

        void isAscii(){
            int select, a;
            char b;
            printf("int = 1 / char = 2 \n");
            scanf("%d", select);
            if (select==1){
                printf("podaj liczbe \n");
                scanf("%d", &a);
                if(a>=65 && a<=90 || a>=97 && a<=122){
                    printf("+");
                }else{
                    printf("-");
                }
            }else if(select==2){
                printf("podaj liczbe \n");
                scanf("%c", &b);
                a=(int)b;
                if(a>=65 && a<=90 || a>=97 && a<=122){
                    printf("+");
                }else{
                    printf("-");
                }
            }
        }

        void isLeapYear(int a){
            if(a%4==0){
                printf("jest przestepny");
            }else{
                printf("nie jest");
            }
        }

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

        void guessNumber(int a){
            char b = 4;
            char stop = 4;
            printf("podaj liczbe");
            scanf("%d", a);
            if(a!=b && stop == 4){
                printf("-");
                stop -= 1;
                printf("twoje zycia %c", stop);
                scanf("%d", a);
            }else if(a!=b && stop == 3){
                printf("-");
                stop -= 1;
                printf("twoje zycia %c", stop);
                scanf("%d", a);
            }else if(a!=b && stop == 2){
                printf("-");
                stop -= 1;
                printf("twoje zycia %c", stop);
                scanf("%d", a);
            }else if(a!=b && stop == 1){
                printf("-");
                stop -= 1;
                printf("twoje zycia %c", stop);
                scanf("%d", a);
            }else if(a!=b && stop == 0){
                printf("-");
                return 0;
            }else{
                printf("+");
            }
        }
int main(){
/*scan for mathBigg*/
//scanf("%d %d %d",&a, &b, &c);
/*scan for rest*/
//scanf("%d %d",&a, &b);
//mathbigg(a,b,c);
//mathOperations(a,b);
//mathBig(a,b);
//isAscii();
//scanf("%d",&a);
//isLeapYear(a);
//isDate(31,4,2000);
guessNumber(3);
}
