#include<stdio.h>
void main(void){

int dec,bin[10],i ,j,op;
printf("Please Enter The Number  ");
scanf("%d",&dec);


printf("To Convert  to Binary please Enter Base 2 ,\nTo Convert  to Octal please Enter Base 8 ,\nTo Convert  to Hexadecimal please Enter Base 16 \n");
printf("Please Enter The base that you want to convert to it  ");
scanf("%d",&op );
switch(op){
    case 2: // binary
           //to convert binary
        printf("%d in binary is ",dec);
        for (i=0;dec>0;i++){
            bin[i]=dec%2;
            dec/=2;
        }
        /*print binary number*/

        for(j=i-1;j>=0;j--){
            printf("%d ",bin[j]);
        }

        break;
    case 8://octal
        printf(" %d in octal %o \n",dec,dec);
        break;
    case 16:
          printf(" %d in Hexadecimal %x \n",dec,dec);
          break;
    default:
        printf("can't Know what the base you want to convert");
        break;
}
printf("\n");
}

