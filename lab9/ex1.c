#include<stdio.h>

     struct dane
     {
        char imie[20];
        char nazwisko[20];
        int nr_telefonu;
     };

int main()
{    
    struct dane a1;
    struct dane a2;

    a1.imie[5], "Adam";
   // a1.nazwisko = "kowalski";
    a1.nr_telefonu = 123456789;

    //a2.imie = "Marek";
    //a2.nazwisko = "Nowak";
   // a2.nr_telefonu = "111222333";


    printf("%s %d", a1.imie, a1.nr_telefonu);
}
