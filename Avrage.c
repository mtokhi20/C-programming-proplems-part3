#include<stdio.h>
void main(void){
    int Number,i,size,count=0;
    float avrage;
    printf("Please Enter size ");
    scanf("%d",&size);

  for(i=1;i<=size;i++){
     printf("Please Enter number ");
     scanf("%d",&Number);
     count+= Number;
   }
    printf("\n count is %d",count);
    avrage=(float)count/size;
    printf("\n Avrage is %5.2f ",avrage);
}
