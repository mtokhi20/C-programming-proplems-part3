#include<stdio.h>
void main(void){
   char ch;
   int counter=0;
   int number;
   printf("Please Enter Number ");
   while ((ch=getch())!='\n')//enter
   {
       switch(ch){
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                if (counter<5){
                    putch(ch);
                    number=number*10+ch-'0';
                    counter++;
                  }
                  break;
            case '\b':
                if (counter>0)
                {
                  putch('\b');
                  putch(' ');
                  putch('\b');
                  counter--;

                }
               break;
            }
   }
   printf("\n number =%d \n ",number);
}
