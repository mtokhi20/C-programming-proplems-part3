#include<stdio.h>
#include<limits.h>
void main(void){
    int Number,i,size,min;
    printf("Please Enter size ");
    scanf("%d",&size);
  min=INT_MAX;
  for(i=1;i<=size;i++){
     printf("Please Enter number ");
     scanf("%d",&Number);
     if(min>Number)
       min=Number;
   }
    printf("\n Min number is %d",min);
}
