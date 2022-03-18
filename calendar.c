#include <stdio.h>
#include "simpio.h"

int main(){

 int year, month, day;
 int i, j, y;

 printf("Give year: ");
 year=GetInteger();
 do{
 printf("Give month(1-12): ");
 month=GetInteger();
 }while(month<1 || month>12);
 if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
    do{
    printf("Give day(1-31): ");
    day=GetInteger();
    }while (day<1 || day>31);
 }else if (month==4 || month==6 || month==9 || month==11){
    do{
    printf("Give day(1-30): ");
    day=GetInteger();
    }while (day<1 || day>30);
 }else {
    if (year%4==0){
      do{
      printf("Give day(1-29): ");
      day=GetInteger();
      }while (day<1 || day>29);
    }else {
      do{
      printf("Give day(1-28): ");
      day=GetInteger();
      }while (day<1 || day>28);
    }
 }


 i=year;
 j=month;
 y=day;

 int h, m, s;
 int a, b, c;

 do{
  printf("Give hour(0-23): ");
  h=GetInteger();
 }while(h<0 || h>23);
 do{
  printf("Give minutes(0-59): ");
  m=GetInteger();
 }while(m<0 || m>59);
 do{
  printf("Give seconds:(0-59): ");
  s=GetInteger();
 }while(s<0 || s>59);

 a=h;
 b=m;
 c=s;

goto clock;
while (TRUE){
    y++;
    if (j==1 || j==3 || j==5 || j==7 || j==8 || j==10){
        if (y==32){
            j++;
            y=1;
        }
    }else if (j==4 || j==6 || j==9 || j==11){
        if (y==31){
            j++;
            y=1;
        }
    }else if (j==2){
        if (i%4==0 && y==30){
            j++;
            y=1;
        }else if (y==29){
            j++;
            y=1;
        }
    }else if (j==12){
         if (y==32){
            i++;
            j=1;
            y=1;
         }
    }
    //date
    while(TRUE){
    sleep(1);
    system("cls");
    c++;
    if (c==60){
       b++;
       c=0;
    }
    if (b==60){
       a++;
       b=0;
    }
    if (a==24){
       a=0;
       break;
    }
    //sleep(1);
clock:
    if (a<=9){
     if (b<=9){
      if (c<=9){
        printf("%d/%d/%d\n", i, j, y);
        printf("0%d:0%d:0%d\n", a, b, c);
      }
      else{
         printf("%d/%d/%d\n", i, j, y);
         printf("0%d:0%d:%d\n", a, b, c);
      }
     }
     else{
       if (c<=9){
        printf("%d/%d/%d\n", i, j, y);
        printf("0%d:%d:0%d\n", a, b, c);
       }
       else{
         printf("%d/%d/%d\n", i, j, y);
         printf("0%d:%d:%d\n", a, b, c);
      }
     }
    }
    else {
     if (b<=9){
      if (c<=9){
        printf("%d/%d/%d\n", i, j, y);
        printf("%d:0%d:0%d\n", a, b, c);
      }
      else{
        printf("%d/%d/%d\n", i, j, y);
        printf("%d:0%d:%d\n", a, b, c);
      }
     }
     else{
      if (c<=9){
        printf("%d/%d/%d\n", i, j, y);
        printf("%d:%d:0%d\n", a, b, c);
      }
      else{
        printf("%d/%d/%d\n", i, j, y);
        printf("%d:%d:%d\n", a, b, c);
      }
     }
    }
   }
   }
 }

