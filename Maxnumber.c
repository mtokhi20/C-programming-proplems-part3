#include<stdio.h>
void main(void){
    int Number,Max,i,size;

    printf("Please Enter size ");
    scanf("%d",&size);

  for(i=1;i<=size;i++){
     printf("Please Enter number ");
     scanf("%d",&Number);
     if (Max<Number){
     Max=Number;
     }
   }
    printf("\n Max number is %d ",Max);
}
