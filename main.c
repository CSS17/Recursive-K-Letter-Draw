#include <stdio.h>
#include <stdlib.h>

void sekilciz(int sayi,int bosluk,int sayac){
    if(bosluk==0){
        printf("*");
        printf("\n");
        sayac=1;
        bosluk=1;

    }


    if(sayac==0){
        printf("*");
      for(int i=0;i<bosluk;i++){
        printf(" ");
      }
   bosluk--;
   printf("*");
   printf("\n");


    sayi--;

    }
    else{
            printf("*");
        for(int i=0;i<bosluk;i++){
            printf(" ");
        }
        printf("*");
        printf("\n");
        bosluk++;
        sayi--;

    }

     if(sayi>1){
       sekilciz(sayi,bosluk,sayac);
    }

}


int main()
{
    int sayi;
    int sayac=0;
    printf("Lutfen Bir Sayi Giriniz:");
    scanf("%d",&sayi);
    int bosluk=(sayi/2);


    sekilciz(sayi,bosluk,sayac);


}
