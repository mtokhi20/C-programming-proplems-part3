#include<stdio.h>
#include<limits.h>
void main(void){
   int Number,size,i,max,max2,min,min2 ;
   printf("Please Enter size ");
   scanf("%d",&size);
    min=min2=INT_MAX;
   for(i=0;i<size;i++){
        printf("Please Enter number ");
        scanf("%d",&Number);
        if (max<Number){
            max2=max;
            max=Number;
        }
        else {
            if ((Number<max)&&(Number>max2))
                max2=Number;
        }
        if(min>Number){
          min2= min;
          min=Number;
        }
        else {
           if ((Number>min)&&(Number<min2))
              min2=Number;
        }
   }

  printf("\n Min number is %d",min);
  printf("\n The second Min number is %d",min2);
  printf("\n Max number is %d",max);
  printf("\n The second max number is %d",max2);
}
